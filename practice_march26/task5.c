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
        int odd;
        for (j = 0; j < R; j++) {
            odd = 1;
            if (a[j][i] % 2 == 0) {
                odd = 0;
                break;
            }
        }
        if (odd == 1) {
            printf("Column %d.", i+1);
            printf("\n");
            return 0;
        }
    }

    printf("Column not found.\n");

    return 0;
}
