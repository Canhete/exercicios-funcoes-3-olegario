/* 6) Crie uma função recursiva que retorne a média dos elementos de um vetor de inteiros. */

#include <stdio.h>

int somaVetor(int vetor[], int tamanho){
    if(tamanho==0){
        return 0;
    } else
    return vetor[tamanho - 1] + somaVetor(vetor, tamanho - 1);
}

double mediaVetor(int vetor[], int tamanho){
    int soma = somaVetor(vetor, tamanho);
    return (double) soma/tamanho;
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

    double resultado = mediaVetor(vetor, n);

    printf("Média dos elementos do vetor: %.2lf\n", resultado);
}