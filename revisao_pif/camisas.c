#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
  char nomes[50];
  char cores[10];
  char tamanhos;
  struct node *next;
};

void add_node(struct node **head, char nome[], char cor[], char tamanho);
void print(struct node *head, int n);
void bubble_sort(struct node **head);


int main(){
  struct node *head = NULL; //inicializando primeira celula 
  int n;
  char aux_nome[50], aux_cor[10], aux_tamanho;

    
  while (scanf("%d", &n) != EOF && n != 0){
    for(int i = 0; i < n; i++){
      scanf(" %[^\n]", aux_nome);
      scanf(" %s", aux_cor);
      scanf(" %c", &aux_tamanho);
      add_node(&head, aux_nome, aux_cor, aux_tamanho);
    }
    bubble_sort(&head);
      print(head, n);

  }
  
  return 0;
}


void add_node(struct node **head, char nome[], char cor[], char tamanho){
  struct node *n = *head; //ponteiro auxiliar
  struct node *nova_celula = (struct node*)malloc(sizeof(struct node)); //nova celula

  //adicionando os valores da lista
  strcpy(nova_celula->nomes, nome);
  strcpy(nova_celula->cores, cor);
  nova_celula->tamanhos = tamanho;

  if(*head == NULL){//adicionando a primeira celula na nova_celula
      nova_celula->next = NULL;
      *head = nova_celula;
      
  }else{
      while (n->next != NULL){ //chegando na ultima celula
          n = n->next;
      }
      
      nova_celula->next = NULL;//inserindo a ultima celula no fim da lista
      n->next = nova_celula;
  }
}
void print(struct node *head,int x){
  struct node *n = head;
  
  for(int i = 0; i < x; i++){
    printf("%s %c %s", n->cores, n->tamanhos, n->nomes);
    printf("\n");
    n = n->next;
  }
}
void bubble_sort(struct node **head){
  struct node *n = *head;
  int troca=1;
  while(troca){
    troca = 0;
    while(n->next != NULL){
     if (strcmp(n->cores, n->next->cores) > 0 || 
        (strcmp(n->cores, n->next->cores) == 0 && n->tamanhos < n->next->tamanhos) ||
        (strcmp(n->cores, n->next->cores) == 0 && n->tamanhos == n->next->tamanhos && strcmp(n->nomes, n->next->nomes) > 0)) {
          struct node *temp = n->next;
          n->next = n->next->next;
          temp->next = n;
          if (n == *head) {
            *head = temp;
          }
          troca= 1;
      }
      n = n->next;
  }
  n = *head;
  }
  
}