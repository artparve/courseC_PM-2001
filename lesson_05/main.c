#include <stdio.h>
#include <stdlib.h>
/*
�������:
1) �������� ��������� ��� �������� ��������, ������ ��������� � �������� �������� ������.

2) �������� ��������� ��� ������ �������� ������ �� ������ ����� � ������.

3) �������� ��������� ��� ������ ����������� ���� ���� �� ������� ������.

4) �������� ��������� ��� ������ ���� ����� �������� ������, ������� ����� ����� 80 ��������.

5) �������� ������� reverse(s), ������� ������������ ���� ��������� �������� s � �������� �������. �������������� �� ��� ��������� ���������, ������� �� ��������� ����� ��������� ��� ������ ������� �������� ������ �� �������.
*/
/*
void main(){
    int ex = 1, error, n = 1;
    int i = 0;
    char ans[256];
    char t;
    printf("Type text for analyze\n\
           0- exit\n\
           1- Average of tabs, spaces and newlines\n\
           2- Sentence with new lines\n\
           3- Histogram\n\
           4- More than 80 symbols\n\
           5- Reverse\n");


    printf("All elements are INT!!!\n");
    while(ex != 0 && (ex = getchar()) != EOF ) {
        printf("%d\n", ex);
        switch (ex){
            case '0':
                printf("exit");
                exit(EXIT_SUCCESS);
            case '\n': /*������������� \n*/
            //case '\t': /*������������� �����*/
            //case ' ': /*������������� ��������*/
            /*case '1':
                printf("Do ctrl+C to end input\nText is ");
                first();
                break;
            case '2':
                printf("Do ctrl+C to end input\nText is ");
                second();
                break;
            case '3':
                printf("Do Enter and ctrl+C to end input\nText is ");
                third();
                break;
            case '4':
                printf("Do ctrl+C to end input\n");
                fourth();
                break;
            case '5':
                n = 0;
                printf("Give me some text and i'll give you reversed: ");
                while ((t= getchar()) != EOF )
                {
                    ans[n] = t;
                    n++;
                }
                fifth(lst(n, ans));
                break;
            default:
                printf("Incorrect letter grade entered.\n");
                printf("Enter a new grade.");
                break;
        }
    }
    return 0;
}
*/

void main(){
    int ex = 0;
    int error, n = 1;
    int i = 0;
    char ans[256];
    char t;
    printf("Type text for analyze\n\
           0- exit\n\
           1- Average of tabs, spaces and newlines\n\
           2- Sentence with new lines\n\
           3- Histogram\n\
           4- More than 80 symbols\n\
           5- Reverse\n");


    printf("All elements are INT!!!\n");
    while((ex = getchar()) != EOF) {
        printf("ex = %d\n", ex);
        switch (ex){
            case 48:
                printf("exit");
                exit(EXIT_SUCCESS);
            case 10: /*������������� \n*/
            case 9: /*������������� �����*/
            case 32: /*������������� ��������*/
            case 49:
                printf("Do ctrl+C to end input\nText is ");
                first();
                break;
            case 50:
                printf("Do ctrl+C to end input\nText is ");
                second();
                break;
            case 51:
                printf("Do Enter and ctrl+C to end input\nText is ");
                third();
                break;
            case 52:
                printf("Do ctrl+C to end input\n");
                fourth();
                break;
            case 53:
                n = 0;
                printf("Give me some text and i'll give you reversed: ");
                while ((t= getchar()) != EOF ){
                    ans[n] = t;
                    n++;
                }
                fifth(lst(n, ans));
                break;
                default:
                printf("Incorrect letter grade entered.\n");
                printf("Enter a new grade.\n");
                break;
            }
        }
    return 0;
}


