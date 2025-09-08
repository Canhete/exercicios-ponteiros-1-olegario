#include <stdio.h>

void main(){
    int vetor[5];
    int *end[5];
    int i;
    for(i=0; i<5; i++){
        printf("Insira o valor[%d]: ", i);
        scanf("%d", &vetor[i]);
        end[i] = &vetor[i];
    }
    for(i=0; i<5; i++){
        if(vetor[i]%2==0){
            printf("%d: ",i);
            printf("%d --> ", vetor[i]);
            printf("[%p]\n", end[i]);
        }
    }
}