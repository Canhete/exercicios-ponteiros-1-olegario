#include <stdio.h>

void main(){
    int *x, *y;
    int a = &x, b = &y;

    if(x > y){
        printf("Maior endereço x: %p\n", a);
    }
    if(x < y){
        printf("Maior endereço y: %p\n", b);
    }
}