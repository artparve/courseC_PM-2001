#include <stdio.h>
#include <stdlib.h>

void main2()
{
    int n;
    int a;

    n = scanf("%d", &a);
    if (n != 1){
        return 1;
    }

    if ((a % 2) == 0){
        printf("��� ����� ������(Yes)");
    }
    else{
        printf("��� ����� ��������(No)");
    }
}
