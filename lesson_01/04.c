#include <stdio.h>
#include <stdlib.h>

void main4(){
    int n;
    int x, y, i = 1;
    long int ex = 1;

    n = scanf("%d %d", &x, &y);

    while(i <= y){
        ex *= x;
        i++;
    }

    printf("%ld", ex);
}
