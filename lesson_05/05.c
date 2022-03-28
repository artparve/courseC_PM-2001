#include <stdio.h>
#include <stdlib.h>

void fifth(const char *s) {
    int n = 0;
    int i;
    printf("n");
    while(s[n] != '\0'){
        n++;
        printf("%d", n);
    }
    printf("%d", n);
    for (i=n-2; i>=0; i--)
        printf("%c", s[i]);
}
char* lst(int n, char ans[]){
    int i;
    char text[n+1];
    for (i=0; i< n; i++)
        text[i] = ans[i];
    text[n]='\0';
    return *text;
}
