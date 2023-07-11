#include <stdio.h>
#include "mycalc.h"

int main(){
    int n1, n2;
    int escolha, resultado;

    printf("digite 2 numeros:\n");
    scanf("%d %d",&n1, &n2);
    printf("digite a operacao q deseja: 1-soma\n2-sub\n3-multi\n4-div:\n");
    scanf("%d", &escolha);
    if (escolha == 1){
        resultado = soma(n1,n2);
        print(resultado);
    }else if(escolha == 2){
        resultado = sub(n1, n2);
        print(resultado);
    }else if(escolha == 3){
        resultado = mult(n1, n2);
        print(resultado);
    }else if(escolha == 4){
        resultado = div(n1, n2);
        print(resultado);
    }
    return 0;
}