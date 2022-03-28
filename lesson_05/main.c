#include <stdio.h>
#include <stdlib.h>
/*
Задания:
1) Напишите программу для подсчета пробелов, знаков табуляции и символов переноса строки.

2) Напишите программу для вывода входного потока по одному слову в строке.

3) Напишите программу для вывода гистограммы длин слов во входном потоке.

4) Напишите программу для вывода всех строк входного потока, имеющих длину более 80 символов.

5) Напишите функцию reverse(s), которая переписывает свой строковый аргумент s в обратном порядке. Воспользуйтесь ею для написания программы, которая бы выполняла такое обращение над каждой строкой входного потока по очереди.
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
            case '\n': /*Игнорирование \n*/
            //case '\t': /*Игнорирование табов*/
            //case ' ': /*Игнорирование пробелов*/
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
            case 10: /*Игнорирование \n*/
            case 9: /*Игнорирование табов*/
            case 32: /*Игнорирование пробелов*/
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


