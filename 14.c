/* 14) Crie uma função recursiva que retorne o menor elemento em um vetor. */

#include <stdio.h>

int tamanho;

int menorElementoVetor(int vetor[], int i, int menor){
    if(i == tamanho){
        return menor;
    } else

    if(vetor[i] < menor){
        menor = vetor[i];
    }

    return menorElementoVetor(vetor, i+1, menor);
}

void montarVetor(int vetor[], int i){
    if(i==tamanho) return;

    printf("Digite o V[%d]: ", i+1);
    scanf("%d", &vetor[i]);

    montarVetor(vetor, i+1);
}

void main(){
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    montarVetor(vetor, 0);

    int menor = menorElementoVetor(vetor, 0, vetor[0]);

    printf("O menor elemento desse vetor é %d\n", menor);
}