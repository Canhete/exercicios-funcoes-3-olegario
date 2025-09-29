/* 5) Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros. */

#include <stdio.h>

int somaVetor(int vetor[], int tamanho){
    if(tamanho==0){
        return 0;
    }
    return vetor[tamanho - 1] + somaVetor(vetor, tamanho - 1);
}

void main(){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Monte um vetor\n");
    for(int i=0; i<n; i++){
        printf("Digite v[%d]: ", i+1);
        scanf("%d", &vetor[i]);
    }

    int resultado = somaVetor(vetor, n);

    printf("Soma dos elementos do vetor: %d\n", resultado);
}