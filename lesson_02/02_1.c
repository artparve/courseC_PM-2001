#include <stdio.h>
#include <stdlib.h>

void main02_1(){
    int a = 1, sum1 = 0, sum2 = 0;

    while(a <= 100){
        if((a % 2) == 0){
            sum2 += a;
        }
        else{
            sum1 += a;
        }
        a++;
        printf("%d %d\n", sum1, sum2);
    }

    printf("%d %d", sum1, sum2);
}
