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
        // Impressão do resultado
        printf("%d: ",i+1);
        printf("%d --> ", vetor[i]*2);
        printf("[%p]\n", end[i]);
    }
}