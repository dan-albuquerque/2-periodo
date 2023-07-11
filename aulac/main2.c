#include <stdio.h>
#include "mypile.h"

int main(){
    int x;
    struct stackNode *head = NULL;
    printf("digite o valor: ");
    scanf("%d", &x);
    push(&head, x);
    printStack(head);

    return 0;
}