#include <stdio.h>
#include <stdlib.h>

void fourth() {
    int n = 0, s; int i = 0; int j = 0;
    char ans[80];
    for (i=0; i< 80; i++)
        ans[i] = "_";
    char c;
    printf("Give me some text: ");
    while ((c = getchar()) != EOF )
    {
        if (c != '\n' && j == 0){
            n++;
            if (n>=80){
                j = 1;
                printf("More then 80 symbols here!:");
                for (i=0; i< 80; i++)
                    printf("%c", ans[i]);
                printf("%c", c);
            }
            else {
            ans[n] = c;
            }
        }
        else if (c == '\n'){
            if (j==1) printf("\n");
            for (i=0; i < 80; i++)
                ans[i] = " ";
            n = 0;
            j=0;
        }
        else printf("%c", c);

    }
}
