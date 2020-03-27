#include <stdio.h>
#include <stdlib.h>

int count_digits(char* s){
    int i, j;
    int count = 0;

    for (i = 0; s[i] != 0; i++){
        if (s[i] >= '0' && s[i] <= '9') count++;
    }
    return count;
}

int main(){
    char a[5];
    scanf("%5s", &a);
    printf("count = %d", count_digits(a));
    return 0;
}
