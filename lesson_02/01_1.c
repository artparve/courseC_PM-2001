#include <stdio.h>
#include <stdlib.h>

int input(){
    int a, n;

    n = scanf("%d", &a);
    if (n != 1){
        printf("Error");
        return -1;
    }

    return a;
}

void main01_1(){
    int c, count = 0, a, sum = 0;

    c = input();

    while (count < c){
        count++;
        a = input();
        sum += a;
    }

    printf("%d", sum);
}
