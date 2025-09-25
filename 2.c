/* 2) Crie uma função recursiva que receba um número inteiro N e retorne o somatório dos números de 1 a N. */
/*
    1, 2, 3, 4, 5
    = 15
*/

#include <stdio.h>

int somaN(int N){
    int soma = 0;
    if(N==1){
        return 1;
    } else
    return N + somaN(N-1);
}

void main(){
    int n;
    printf("Digite até que termo somar: ");
    scanf("%d", &n);

    int somaTotal = somaN(n);

    printf("Soma total: %d\n", somaTotal);
}