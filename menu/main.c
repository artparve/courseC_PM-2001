#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct Node {
    int value;
    struct Node *next;
    }Node;


    void push(Node **head, int data) {
        Node *tmp = (Node*) malloc(sizeof(Node));
        tmp->value = data;
        tmp->next = (*head);
        (*head) = tmp;
    }

    int pop(Node **head) {
        Node* prev = NULL;
        int val;
        if (head == NULL) {
            exit(-1);
        }
        prev = (*head);
        val = prev->value;
        (*head) = (*head)->next;
        free(prev);
        return val;
    }

    Node* getNth(Node* head, int n) {
        int counter = 0;
        while (counter < n && head) {
            head = head->next;
            counter++;
        }
        return head;
    }

    Node* getLast(Node *head) {
        if (head == NULL) {
            return NULL;
        }
        while (head->next) {
            head = head->next;
        }
        return head;
    }
    int ex = 1, error, n = 1 ;
    int a;
    printf("Give me an exercise you want to see\n\
           '' - exit\n\
           1-push\n");

    Node *head = NULL;

    while(ex != 0 && (ex = getchar()) != EOF ) {
        printf("hi!");
        switch (ex){
            case '1':
                printf("you want to give a first element ");
                error = scanf("%d", &a);
                printf("%d\n", a);
                if(error != 1) {
                    printf("Wrong input!\n");
                    return 1;
                }
                push(head,a);
                ex=1;
                printf("ex is %d\n", ex);
                break;
          /*  case '2':
                gcd();
                break;
            case '3':
                rev();
                break;
            case '4':
                is_prime();
                break;
            case '5':
                minn();
                break;
            case '6':
                recursion();
                break;*/
            case '0':
                printf("you want to go out");
                ex = 0;
                break;
            case '\n': /* ignore newlines, */
            case '\t': /* tabs, */
            case ' ': /* and spaces in input */
                break;
            default:
                printf("%s", "Incorrect letter grade entered.");
                puts(" Enter a new grade.");
                break;

        }
    }

    return 0;

}


