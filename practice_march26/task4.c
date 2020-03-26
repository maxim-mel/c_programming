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

    for (i = 0; i < C; i++) {
        int min = 1000;
        for (j = 0; j < R; j++) {
            if (a[j][i] > 0) {
                if (a[j][i] < min) {
                min = a[j][i];
                }
            }
        }
        printf("The minimum positive value in column %d is %d.", i+1, min);
        printf("\n");
    }


    return 0;
}
