#include <stdio.h>
#include <stdlib.h>

double P(double r){
        double p;
        p = 2 * 3.14 * r;
        return p;
    }

double S(double r){
        double s;
        s = 3.14 * r * r;
        return s;
    }

void main7(){

    double r;
    int n;

    n = scanf("%lf", &r);
    if(n != 1){
        return 1;
    }

    printf("%lf\n", P(r));
    printf("%lf", S(r));
}
