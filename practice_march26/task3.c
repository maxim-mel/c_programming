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

    int max_count = 0;
    int row_n;
    for (i = 0; i < R; i++) {
        int count;
        int k;
        for (j = 0; j < C; j++) {
            count = 0;
            for (k = 0; k < C; k++) {
                if (a[i][j] = a[i][k]) count += 1;
            }
        }
        if (count > max_count) {
            max_count = count;
            row_n = i;
        }
    }

    printf("Row %d", row_n);

    return 0;
}
