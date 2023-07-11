#ifndef __MYPILE__
#define __MYPILE__
struct stackNode;
void push(struct stackNode **head, int a);
int pop(struct stackNode **head);
void printStack(struct stackNode *head);
#endif