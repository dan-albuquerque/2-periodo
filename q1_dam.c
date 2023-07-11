#include <stdio.h>
//declarando calls como variavel global, pra n precisar alterar endereco de memoria e tal ja que é um programa programa pequeno
int calls;
int fibonacci(int pos);


int main(){

    int rows, posicao, valor;
    scanf("%d", &rows);

    for(int i=0; i<rows; i++) {

        calls = 0;
        scanf("%d", &posicao);

        //retornando o valor da posicao de fibonacci e incrementando calls
        valor = fibonacci(posicao);

        printf("fib(%d) = %d calls = %d\n", posicao, calls, valor);
    }
    return 0;
}

int fibonacci(int pos) {
    //casos base
    if (pos == 0) return 0;
    
    else if(pos == 1) return 1;
    
    //ate chegar no caso base, vai incrementar calls e retornar a si mesmo 
    else{
        calls += 2;
        return fibonacci(pos-1) + fibonacci(pos-2); 
    }
    
}
