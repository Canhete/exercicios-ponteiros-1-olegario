#include <stdio.h>

void main(){
    float *end[3][3];
    float matriz[3][3];
    int i, j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            matriz[i][j] = i + j;
            end[i][j] = &matriz[i][j];

            // Impressão do resultado
            printf("(%d)(%d) -> ",i+1, j+1);
            printf("[%p]\n",end[i][j]);
        }
    }
}