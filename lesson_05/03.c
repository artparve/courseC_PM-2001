#include <stdio.h>
#include <stdlib.h>

void third(){
    int n = 0, max =0; int i; int j;
    int ans[25];
    for (i=0; i< 25; i++)
        ans[i] = 0;
    char c;
    printf("Histogram of ");
    while ((c = getchar()) != EOF )
    {
        if (c != '\t' && c != ' ' && c != '\n') n++;
        else
        {
            ans[n-1] = ans[n-1]+1;
            if (max < n)
                max = n;
            n = 0;
        }
    }
    printf("is:\n",max );
    for (i=1; i<= max; i++){
        printf("%d ", i);
        j = 0;
        while(j<ans[i-1]){
           printf("-");
           j++;
        }
        printf("\n");
    }
}
