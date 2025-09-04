#include <stdio.h>

void main(){
    float vetor[10];
    float *end[10];
    int i;
    for(i=0; i<10; i++){
        vetor[i] = i;
        end[i] = &vetor[i];

        // Impressão do resultado
        printf("%d: ",i+1);
        printf("[%p]\n",end[i]);
    }
}