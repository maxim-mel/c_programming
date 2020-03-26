#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define R 5
#define C 6

int main()
{
    int a[R][C];
    int i, j;

    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            a[i][j] = rand()%100;
        }
    }

    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < R; i++) {
        int min = 100;
        int max = 0;
        int min_i = 0;
        int max_i = 0;
        for (j = 0; j < C; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
                min_i = j;
            }
            if (a[i][j] > max) {
                max = a[i][j];
                max_i = j;
            }
        }
        a[i][min_i] = max;
        a[i][max_i] = min;
    }

    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
