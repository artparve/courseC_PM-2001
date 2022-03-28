#include <stdio.h>
#include <stdlib.h>

void first() {
    int n, t, s; int i;
    char str;
    while ((str = getchar()) != EOF ){
        if (str == ' ') s++;
        else if (str == '\t') t++;
        else if (str == '\n') n++;
    }
    printf("\nIn the text there are %d spaces, %d tabs and %d newlines\n", s, t, n);
}
