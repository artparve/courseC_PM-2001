#include <stdio.h>
#include <stdlib.h>

int second() {
    int n, t, s; int i = 0; int j;
    char c;
    printf("By the words:\n");
    while ((c = getchar()) != EOF ){
        if (c == '\t' || c == ' ')
            printf("\n");
        else printf("%c", c);
    }
}
