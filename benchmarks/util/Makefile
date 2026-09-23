FLAGS = -Ofast -march=native -mtune=native -Wall

all: stat stddev

stat: stat.c
	gcc $(FLAGS) $^ -o $@

stddev: stddev.c
	gcc $(FLAGS) $^ -o $@ -lm

clean:
	$(RM) stat stddev
