#include <stdio.h>
#include <stdlib.h>

void main6(){
    int n, a, a1, count = 0;

    n = scanf("%d", &a);
    if(n != 1){
        return 1;
    }

    while(a > 0){
        a1 = a % 10;
        if(a1 == 7){
            count++;
        }
        a /= 10;
    }

    printf("%d", count);
}
