#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char **argv)
{
    if (argc != 2) {
        printf("Usage: FILENAME\n");
        return EXIT_FAILURE;
    }

    FILE* stream = fopen(argv[1], "r");

    if (stream == NULL) {
        printf("File name not valid.\n");
        return EXIT_FAILURE;
    }

    char line[1024];
    double average = 0;
    int i = 0;
    int max_lines = 1000;
    double numbers[max_lines];

    while (fgets(line, 1024, stream))
    {
        numbers[i] = strtod(line, NULL);
        average += numbers[i];
        i++;

        if (i > max_lines) {
            fprintf(stderr, "Increase max_lines\n");
            return EXIT_FAILURE;
        }
    }

    average /= i;

    double stddev = 0;
    for (int j = 0; j < i; j++) {
        stddev += (numbers[j] - average) * (numbers[j] - average);
    }

    stddev = sqrt(stddev / i);

    printf("%lf,%lf", average, stddev);

    return EXIT_SUCCESS;
}
