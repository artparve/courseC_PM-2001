#include <stdio.h>
#include <stdlib.h>

void main1()
{
    int n;
    float a1, a2, a3, a4, a5;

    n = scanf("%f %f %f %f %f", &a1, &a2, &a3, &a4, &a5);
    if(n != 5){
        return 1; /* exit with error */
    }

    printf("%.2f",((a1 + a2 + a3 + a4 + a5) / 5));
}
