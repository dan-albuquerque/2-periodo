#include <stdio.h>
#include <stdlib.h>


struct pontos{
    int x;
    int y;
};

struct retangulo{ // vai receber 2 
    struct pontos pt1;
    struct pontos pt2;
    
};
int area(struct retangulo retangulo);

int main(){
    struct pontos pontos;
    struct retangulo retangulo;
    int resultado;
    printf("primeiros pontos: ");
    scanf("%d %d", &retangulo.pt1.x, &retangulo.pt1.y);

    printf("segundos pontos: ");
    scanf("%d %d", &retangulo.pt2.x, &retangulo.pt2.y);
    resultado = area(retangulo);
    printf("area: %d", resultado);


    return 0;
}

int area(struct retangulo retangulo){
    int altura = abs(retangulo.pt1.y - retangulo.pt2.y);
    int base = abs(retangulo.pt1.x - retangulo.pt2.x);
    return altura * base;

}