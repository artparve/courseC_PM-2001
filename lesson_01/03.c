#include <stdio.h>
#include <stdlib.h>

void main3(){
    int sum = 0;
    int i = 1;

    while(i <= 10){
        sum += i;
        i++;
    }

    printf("%d", sum);
}
