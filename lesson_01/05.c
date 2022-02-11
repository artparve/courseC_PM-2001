#include <stdio.h>
#include <stdlib.h>

void main5(){
    int n, a, a1, a2, a3, a4, a5;

    n = scanf("%d", &a);
    if(n != 1){
        return 1;
    }

    a5 = a % 10;
    a4 = a / 10 % 10;
    a3 = a / 100 % 10;
    a2 = a / 1000 % 10;
    a1 = a / 10000;

    if((a1 == a5) && (a2 == a4)){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
