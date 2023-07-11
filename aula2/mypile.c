#include <stdlib.h>
#include <stdio.h>
struct stackNode{
	int valor;
	struct stackNode *next;
};
void push(struct stackNode **head, int a){ 

  struct stackNode *novo = (struct stackNode *)malloc(sizeof(struct stackNode));
   
  if(novo!= NULL){ 
    novo->valor = a;
    novo->next = *head;
    *head = novo; 
    
  }else{
		printf("Nao existe memoria disponivel\n");
	}
}
int pop(struct stackNode **head){ //removendo um elemento da pilha
	struct stackNode *temp;
	int var;
	
	temp = *head;
	var = (*head)->valor; //retornando o valor contindo na antiga pilha
	*head = (*head)->next; //atualizando a cabeça da pilha para o proximo elemento
	free(temp); //desalocando o espaco de memoria usado
	return var;
}
void printStack(struct stackNode *head){ //imprime a pilha inteira
	
	if(head == NULL){
		printf("Lista vazia\n");
	}else{
		struct stackNode *aux = head;
		while(aux !=NULL){
			printf("%d-- ", aux->valor);
			aux= aux->next;
		}		
		printf("NULL \n");
	}
}