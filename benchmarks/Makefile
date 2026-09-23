#SAC = ~/slice-for-sac-2-c/build_d/sac2c_d -t mt_pth -maxlur 10

SAC = sac2c -t mt_pth -maxlur 10

SAC_FLAGS = -Xc -Ofast -L.

STACKBUMP = ulimit -s 65520;

SAC_INC = $(shell $(SAC) -CSACINCLUDES)

CC = gcc
CFLAGS = -Ofast -march=native -mtune=native -Wall

.PHONY: all clean

all: bin/one_elem_selection bin/sum_selection bin/one_elem_slice bin/sum_slice

bin/one_elem_selection: src/one_elem.sac
	$(STACKBUMP) $(SAC) $(SAC_FLAGS) $< -o $@

bin/one_elem_slice: src/one_elem.sac
	$(STACKBUMP) $(SAC) $(SAC_FLAGS) -D SLICE $< -o $@

bin/sum_selection: src/sum.sac
	$(STACKBUMP) $(SAC) $(SAC_FLAGS) $< -o $@

bin/sum_slice: src/sum.sac
	$(STACKBUMP) $(SAC) $(SAC_FLAGS) -D SLICE $< -o $@	

bin/scan_selection: src/scan.sac
	$(STACKBUMP) $(SAC) $(SAC_FLAGS) $< -o $@

bin/scan_slice: src/scan.sac
	$(STACKBUMP) $(SAC) $(SAC_FLAGS) -D SLICE $< -o $@	

clean:
	$(RM) -r host tree bin/*