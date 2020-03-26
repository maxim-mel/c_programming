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
        int row[C];
        for (j = 0; j < C; j++) {
            row[j] = a[i][j];
        }
        int k, l;
        for (k = 0; k < R; k++) {
            int s;
            for (l = 0; l < C; l++) {
                s = 1;
                if (a[k][l] != row[l]) {
                    s = 0;
                    break;
                }
            }
            if (s = 1) {
                printf("Rows not exists.\n");
                return 0;
            }
        }
    }

    printf("Rows exists.\n");

    return 0;
}
