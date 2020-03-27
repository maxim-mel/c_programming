#include <stdio.h>
#include <stdlib.h>

char *str_chr(char *s, char c){
    int i;
    for (i = 0; s[i] != 0; i++){
        if (s[i] == c) {
            return &s[i];
        }
    }
    return 0;
}

int main(){
    char a[5] = {0};
    gets(a);
    char s;
    s = getchar();
    if (str_chr(a, s) != 0) {
        printf("address is %d", str_chr(a, s));
    }
    return 0;
}
