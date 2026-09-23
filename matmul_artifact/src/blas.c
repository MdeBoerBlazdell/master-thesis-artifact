#include <stdlib.h>
#include <stdio.h>
#ifdef ACCELERATE
#include <Accelerate/Accelerate.h>
#else
#include <cblas.h>
#endif
#include <sys/time.h>

#define TIME(duration, fncalls)                                        \
    do {                                                               \
        struct timeval tv1, tv2;                                       \
        gettimeofday(&tv1, NULL);                                      \
        fncalls                                                        \
        gettimeofday(&tv2, NULL);                                      \
        duration = (double) (tv2.tv_usec - tv1.tv_usec) / 1000000 +    \
         (double) (tv2.tv_sec - tv1.tv_sec);                           \
    } while (0)

void matmul(double *a, double *b, double *c, int m, int k, int n)
{
    cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans,
            m, n, k, 1.0, a, k, b, n, 0.0, c, n);
}

void init(double *x, int m, int n, double value)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            x[i * n + j] = value;
        }
    }
}

int main(int argc, char **argv)
{
    if (argc != 4) {
        printf("Usage: N K N\n");
        exit(EXIT_FAILURE);
    }

    int M = atoi(argv[1]);
    int K = atoi(argv[2]);
    int N = atoi(argv[3]);

    double *a = malloc(M * K * sizeof(double));
    double *b = malloc(K * N * sizeof(double));
    double *c = calloc(M * N, sizeof(double));

    init(a, M, K, 1.0);
    init(b, K, N, 1.0);

    double duration;
    TIME(duration, matmul(a, b, c, M, K, N););

    printf("%lf", 2.0 * M * N * K / 1000000000.0 / duration);

    free(a);
    free(b);
    free(c);

    exit(EXIT_SUCCESS);
}
