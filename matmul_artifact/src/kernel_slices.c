#include <stdlib.h>
#include <stddef.h>

#define MR 6
#define NR 8
#define KC 250

#define real double

typedef double vect __attribute__((__vector_size__(32), aligned(8)));

void matmul(double **cp, double *a, double *b)
{
    double *c = malloc(MR * NR * sizeof(double));
    *cp = c;

    vect (*bv)[KC][NR / 4] = (vect (*)[KC][NR / 4])b;
    vect (*cv)[MR][NR / 4] = (vect (*)[MR][NR / 4])c;

    vect zero = {0.,0.,0.,0.};
    vect c00 = zero, c01 = zero;
    vect c10 = zero, c11 = zero;
    vect c20 = zero, c21 = zero;
    vect c30 = zero, c31 = zero;
    vect c40 = zero, c41 = zero;
    vect c50 = zero, c51 = zero;
    for (size_t k = 0; k < KC; k++) {
      vect b0 = (*bv)[k][0];
      vect b1 = (*bv)[k][1];
      real    a0 = a[0 * KC + k];
      real    a1 = a[1 * KC + k];
      real    a2 = a[2 * KC + k];
      real    a3 = a[3 * KC + k];
      real    a4 = a[4 * KC + k];
      real    a5 = a[5 * KC + k];

      c00 += a0 * b0; c01 += a0 * b1;
      c10 += a1 * b0; c11 += a1 * b1;
      c20 += a2 * b0; c21 += a2 * b1;
      c30 += a3 * b0; c31 += a3 * b1;
      c40 += a4 * b0; c41 += a4 * b1;
      c50 += a5 * b0; c51 += a5 * b1;
    }
    (*cv)[0][0] = c00; (*cv)[0][1] = c01;
    (*cv)[1][0] = c10; (*cv)[1][1] = c11;
    (*cv)[2][0] = c20; (*cv)[2][1] = c21;
    (*cv)[3][0] = c30; (*cv)[3][1] = c31;
    (*cv)[4][0] = c40; (*cv)[4][1] = c41;
    (*cv)[5][0] = c50; (*cv)[5][1] = c51;
}

