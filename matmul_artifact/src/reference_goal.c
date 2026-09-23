/* kernel computes c -> c + ab. 4 levels of blocking. Update the blocks of c in-place. */

#define _ISOC11_SOURCE

#define M0B  96
#define K0B  40
#define N0B  5

#define M1B  1
#define K1B  1
#define N1B  250

#define M2B  20
#define K2B  1
#define N2B  1

#define M3B  6
#define K3B  250
#define N3B  8

#define N   (N0B * N1B * N2B * N3B)
#define M   (M0B * M1B * M2B * M3B)
#define K   (K0B * K1B * K2B * K3B)

#include <stdlib.h>
#include <omp.h>
#include <string.h>  // for memcpy
#include <stdio.h>
#include <time.h>
#include <assert.h>
#include <stdint.h>
#include <immintrin.h>

#define malloc(sz)  aligned_alloc(32,sz)


#define real double
#define V    (4)
#define vector(elcount, type)  \
    __attribute__((vector_size(32))) type

typedef vector (V, real) vecreal;


static inline void
mm_artem(double (*a)[6][250], vecreal (*b)[250][2], vecreal (*c)[6][2])
{
  vecreal c00 = (*c)[0][0], c01 = (*c)[0][1]; 
  vecreal c10 = (*c)[1][0], c11 = (*c)[1][1]; 
  vecreal c20 = (*c)[2][0], c21 = (*c)[2][1]; 
  vecreal c30 = (*c)[3][0], c31 = (*c)[3][1]; 
  vecreal c40 = (*c)[4][0], c41 = (*c)[4][1]; 
  vecreal c50 = (*c)[5][0], c51 = (*c)[5][1]; 

  for (size_t k = 0; k < 250; k++) {
    register vecreal b0 = (*b)[k][0];
    register vecreal b1 = (*b)[k][1];
    real    a0 = (*a)[0][k];
    real    a1 = (*a)[1][k];
    real    a2 = (*a)[2][k];
    real    a3 = (*a)[3][k];
    real    a4 = (*a)[4][k];
    real    a5 = (*a)[5][k];

    c00 += a0 * b0; c01 += a0 * b1;
    c10 += a1 * b0; c11 += a1 * b1;
    c20 += a2 * b0; c21 += a2 * b1;
    c30 += a3 * b0; c31 += a3 * b1;
    c40 += a4 * b0; c41 += a4 * b1;
    c50 += a5 * b0; c51 += a5 * b1;
  }

  (*c)[0][0] = c00; (*c)[0][1] = c01;
  (*c)[1][0] = c10; (*c)[1][1] = c11;
  (*c)[2][0] = c20; (*c)[2][1] = c21;
  (*c)[3][0] = c30; (*c)[3][1] = c31;
  (*c)[4][0] = c40; (*c)[4][1] = c41;
  (*c)[5][0] = c50; (*c)[5][1] = c51;
}


static inline void
sum1d (const size_t n, const double *a,
       const double *b, double *c)
{
  for (size_t i = 0; i < n; i++) {
    c[i] = a[i] + b[i];
  }
}

#define SUM(n, a, b, c)  sum1d(n, (double *)a, (double *)b, (double *)c)

static inline void
print_mat(const size_t m, const size_t n, const double (*a)[m][n])
{
  for (size_t i = 0; i < m; i++) {
    for (size_t j = 0; j < n; j++)
      printf("%5.3f ", (*a)[i][j]);
    printf("\n");
  }
  printf("\n");
}

static inline void
mm_naive (const size_t p, const size_t q, const size_t r,
          const double (*a)[p][q],
          const double (*b)[q][r],
          double (*c)[p][r])
{
  //print_mat(p,q,a);
  //print_mat(q,r,b);
  //printf("----\n");

  for (size_t i = 0; i < p; i++)
    for (size_t j = 0; j < r; j++) {
      (*c)[i][j] = 0.;
      for (size_t k = 0; k < q; k++) {
        //printf("c[%zu][%zu] += %f * %f\n",
        //       i, j, (*a)[i][k], (*b)[k][j]);
        (*c)[i][j] += (*a)[i][k] * (*b)[k][j];
      }
    }
}



static inline void
init_mat(size_t m, size_t n, double (*a)[m][n])
{
  for (size_t i = 0; i < m; i++) {
    for (size_t j = 0; j < n; j++)
      (*a)[i][j] = (double)(n*i+j);
  }
}


static inline void
mmy1 (double (*a)[M3B][K3B],
      double (*b)[K3B][N3B],
      double (*c)[M3B][N3B])
{
  //mm_naive(M3B, K3B, N3B, a, b, c);
  mm_artem(a, (vecreal (*)[250][2])b, (vecreal (*)[6][2])c);
//  assert(M3B == 5); assert(K3B == 250); assert(N3B == 8);
}



static inline void
mmy2(double (*a)[M2B][K2B][M3B][K3B],
     double (*b)[K2B][N2B][K3B][N3B],
     double (*c)[M2B][N2B][M3B][N3B])
{
  for (size_t i = 0; i < M2B; i++) {
    for (size_t j = 0; j < N2B; j++) {
      for (size_t k = 0; k < K2B; k++) {
        mmy1(&(*a)[i][k], &(*b)[k][j], &(*c)[i][j]);
      }
    }
  }
}

void
mmy3(double (*a)[M1B][K1B][M2B][K2B][M3B][K3B],
     double (*b)[K1B][N1B][K2B][N2B][K3B][N3B],
     double (*c)[M1B][N1B][M2B][N2B][M3B][N3B])
{
  for (size_t i = 0; i < M1B; i++) {
    for (size_t j = 0; j < N1B; j++) {
      for (size_t k = 0; k < K1B; k++) {
          mmy2(&(*a)[i][k], &(*b)[k][j], &(*c)[i][j]);
      }
    }
  }
}

void
mmy4(double (*a)[M0B][K0B][M1B][K1B][M2B][K2B][M3B][K3B],
     double (*b)[K0B][N0B][K1B][N1B][K2B][N2B][K3B][N3B],
     double (*c)[M0B][N0B][M1B][N1B][M2B][N2B][M3B][N3B])
{
  #pragma omp parallel for // parallelise this loop
  for (size_t i = 0; i < M0B; i++) {
    for (size_t j = 0; j < N0B; j++) {
      for (size_t k = 0; k < K0B; k++) {
          mmy3(&(*a)[i][k], &(*b)[k][j], &(*c)[i][j]);
      }
    }
  }
}

#define UNTILE6(M1,K1,M2,K2,M3,K3,FROM,TO) \
  do {  \
    /* [M1][K1][M2][K2][M3][K3] -> \
       [M1][M2][M3][K1][K2][K3]  */ \
    for (size_t m1 = 0; m1 < M1; m1++) \
     for (size_t m2 = 0; m2 < M2; m2++) \
       for (size_t m3 = 0; m3 < M3; m3++) \
         for (size_t k1 = 0; k1 < K1; k1++) \
           for (size_t k2 = 0; k2 < K2; k2++) \
             for (size_t k3 = 0; k3 < K3; k3++) \
               TO[m1][m2][m3][k1][k2][k3] = \
               FROM[m1][k1][m2][k2][m3][k3]; \
  } while (0)

#define TILE6(M1,M2,M3,K1,K2,K3,FROM,TO) \
  do {  \
    /* [M1][M2][M3][K1][K2][K3] ->  \
       [M1][K1][M2][K2][M3][K3] */ \
    for (size_t m1 = 0; m1 < M1; m1++) \
     for (size_t m2 = 0; m2 < M2; m2++) \
       for (size_t m3 = 0; m3 < M3; m3++) \
         for (size_t k1 = 0; k1 < K1; k1++) \
           for (size_t k2 = 0; k2 < K2; k2++) \
             for (size_t k3 = 0; k3 < K3; k3++) \
               TO[m1][k1][m2][k2][m3][k3] = \
               FROM[m1][m2][m3][k1][k2][k3]; \
  } while (0)

#define UNTILE8(M0,K0,M1,K1,M2,K2,M3,K3,FROM,TO) \
  do {  \
    for (size_t m0 = 0; m0 < M0; m0++) \
    for (size_t m1 = 0; m1 < M1; m1++) \
     for (size_t m2 = 0; m2 < M2; m2++) \
       for (size_t m3 = 0; m3 < M3; m3++) \
         for (size_t k0 = 0; k0 < K0; k0++) \
         for (size_t k1 = 0; k1 < K1; k1++) \
           for (size_t k2 = 0; k2 < K2; k2++) \
             for (size_t k3 = 0; k3 < K3; k3++) \
               TO[m0][m1][m2][m3][k0][k1][k2][k3] = \
               FROM[m0][k0][m1][k1][m2][k2][m3][k3]; \
  } while (0)

#define TILE8(M0,M1,M2,M3,K0,K1,K2,K3,FROM,TO) \
  do {  \
    for (size_t m0 = 0; m0 < M0; m0++) \
    for (size_t m1 = 0; m1 < M1; m1++) \
     for (size_t m2 = 0; m2 < M2; m2++) \
       for (size_t m3 = 0; m3 < M3; m3++) \
         for (size_t k0 = 0; k0 < K0; k0++) \
         for (size_t k1 = 0; k1 < K1; k1++) \
           for (size_t k2 = 0; k2 < K2; k2++) \
             for (size_t k3 = 0; k3 < K3; k3++) \
               TO[m0][k0][m1][k1][m2][k2][m3][k3] = \
               FROM[m0][m1][m2][m3][k0][k1][k2][k3]; \
  } while (0)




// Measure time
#define MILLION 1000000
static inline int64_t
time_elapsed (struct timespec a, struct timespec b)
{
    return ((int64_t)a.tv_sec - b.tv_sec) * MILLION
            + ((int64_t)a.tv_nsec - b.tv_nsec) / 1000LL;
}

static inline struct timespec
time_gettime ()
{
    struct timespec s;
    clock_gettime(CLOCK_REALTIME, &s);
    return s;
}




int main() {
  double (*a)[M][K] = malloc(sizeof *a);
  double (*b)[K][N] = malloc(sizeof *b);
  double (*c)[M][N] = malloc(sizeof *c);

  srand (time (NULL));

  init_mat(M,K,a);
  init_mat(K,N,b);

  //print_mat(M,K,a);
  //print_mat(K,N,b);

  //mm_naive(M,K,N,a,b,c);
  //print_mat(M,N,c);



  // Next we reshape and tile arrays into 6d ones
  double (*a1)[M0B][M1B][M2B][M3B][K0B][K1B][K2B][K3B] = (void *)a;
  double (*b1)[K0B][K1B][K2B][K3B][N0B][N1B][N2B][N3B] = (void *)b;
  double (*c1)[M0B][M1B][M2B][M3B][N0B][N1B][N2B][N3B] = (void *)c;

  double (*a2)[M0B][K0B][M1B][K1B][M2B][K2B][M3B][K3B] = malloc(sizeof *a2);
  double (*b2)[K0B][N0B][K1B][N1B][K2B][N2B][K3B][N3B] = malloc(sizeof *b2);
  double (*c2)[M0B][N0B][M1B][N1B][M2B][N2B][M3B][N3B] = malloc(sizeof *c2);

  TILE8(M0B,M1B,M2B,M3B,K0B,K1B,K2B,K3B,(*a1),(*a2));
  TILE8(K0B,K1B,K2B,K3B,N0B,N1B,N2B,N3B,(*b1),(*b2));


  //print_mat(M3B,K3B,&(*a2)[0][0][0][0]);

  fprintf(stderr, "matmul of [%d,%d] x [%d,%d]\n", M, K, K, N);
  struct timespec start = time_gettime ();
  mmy4(a2, b2, c2);
  struct timespec end = time_gettime ();
  UNTILE8(M0B,N0B,M1B,N1B,M2B,N2B,M3B,N3B,(*c2),(*c1));
  double time_sec = (double)(time_elapsed(end, start)) / (double)MILLION;
  fprintf(stderr, "Time in sec: %f\n", time_sec);
  printf("%lf", 2. * (double)M * (double)K * (double)N
          / time_sec / 1000000000.);



  //print_mat(M,N,c);

  free(a2); free(b2); free(c2);
  free(a);
  free(b);
  free(c);
  return 0;
}
