SAC = sac2c -t mt_pth -maxlur 10

SAC_FLAGS = -Xc -Ofast -L.

# sac2c traverses the AST recursively; unrolling mm.sac produces ~2000-long
# vardec/exprs/assign chains that overflow the default 8 MB stack (SIGSEGV in
# the opt phase). Raise the stack for every sac2c invocation. 65520 KB (~64 MB)
# is the macOS hard cap and comfortably within Linux limits.
STACKBUMP = ulimit -s 65520;

SAC_INC = $(shell $(SAC) -CSACINCLUDES)

CC = gcc
CFLAGS = -Ofast -march=native -mtune=native -Wall

.PHONY: all clean

all: bin/mm bin/mm_slices bin/naive_slices bin/naive bin/split bin/split_slices bin/flat bin/blis bin/openblas bin/mkl

# Blocked SaC matmul, for benchmarking
bin/mm: src/mm.sac bin/kernel.o Shapely
	$(STACKBUMP) $(SAC) $(SAC_FLAGS) $< -o $@

# mm_slices: like bin/mm, but the FFI micro-kernel receives zero-copy
# _slice_VxA_ views of shape [M3B,K3B]/[K3B,N3B] (kernel_slices.o, no offset
# args) instead of the full preblocked array plus row-major offsets (kernel.o).
bin/mm_slices: src/mm_slices.sac bin/kernel_slices.o Shapely
	$(STACKBUMP) $(SAC) $(SAC_FLAGS) $< -o $@

bin/mm_selections: src/mm_selections.sac bin/kernel_slices.o Shapely
	$(STACKBUMP) $(SAC) $(SAC_FLAGS) $< -o $@

bin/naive: src/naive.sac
	$(STACKBUMP) $(SAC) $(SAC_FLAGS) $< -o $@

# naive_slices: computes each output element as an independent length-K3B dot
# product (contraction index innermost) -- reads B column-wise, no reuse.
bin/naive_slices: src/naive_slices.sac
	$(STACKBUMP) $(SAC) $(SAC_FLAGS) $< -o $@

# Reports matmul, blocking and unblocking times
bin/split: src/split.sac bin/kernel.o Shapely
	$(STACKBUMP) $(SAC) $(SAC_FLAGS) $< -o $@

# Reports matmul, blocking and unblocking times for slices
bin/split_slices: src/split_slices.sac bin/kernel_slices.o Shapely
	$(STACKBUMP) $(SAC) $(SAC_FLAGS) $< -o $@

# Unblocked SaC matmul
bin/flat: src/flat.sac
	$(STACKBUMP) $(SAC) $(SAC_FLAGS) $< -o $@

# Blocking module
Shapely: src/Shapely.sac
	$(STACKBUMP) $(SAC) $(SAC_FLAGS) -Xc -O3 -Xc -Ofast $<

bin/blis: src/blas.c
	$(CC) $(CFLAGS) $< -o $@ -lblis64

OPENBLAS = $(shell brew --prefix openblas)
bin/openblas: src/blas.c
	$(CC) $(CFLAGS) -I$(OPENBLAS)/include $< -o $@ -L$(OPENBLAS)/lib -lopenblas

# Native macOS BLAS (Accelerate) — arm64 replacement for blis/mkl
bin/accelerate: src/blas.c
	$(CC) $(CFLAGS) -DACCELERATE -DACCELERATE_NEW_LAPACK $< -o $@ -framework Accelerate

bin/mkl: src/blas.c
	$(CC) $(CFLAGS) -L${MKLROOT}/lib/intel64 -Wl,--no-as-needed $< -o $@ -lmkl_intel_lp64 -lmkl_gnu_thread -lmkl_core -lgomp -lpthread -lm -ldl

bin/reference_goal: src/reference_goal.c
	$(CC) $(CFLAGS) $< -o $@ -fopenmp

bin/kernel.o: src/kernel.c
	$(STACKBUMP) $(SAC) -cc ccmod \
	       -Xc -O3 -Xc -Ofast \
	       -Xc -march=native \
	       -Xc -mtune=native \
	       -o $@ $<

bin/kernel_slices.o: src/kernel_slices.c
	$(STACKBUMP) $(SAC) -cc ccmod \
	       -Xc -O3 -Xc -Ofast \
	       -Xc -march=native \
	       -Xc -mtune=native \
	       -o $@ $<

clean:
	$(RM) -r host tree bin/*
