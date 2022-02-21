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

void main01_2(){
    int c, count = 0, a, min;

    c = input();

    min = input();

    while (count < c - 1){
        count++;
        a = input();
        if (a < min){
            min = a;
        }
    }

    printf("%d", min);
}
