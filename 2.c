#include <stdio.h>

void main(){
    int *x, *y;
    int a, b;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    a = &x, b = &y;

    if(x > y){
        printf("Maior endereço x: %p\n", a);
    }
    if(x < y){
        printf("Maior endereço y: %p\n", b);
    }
}