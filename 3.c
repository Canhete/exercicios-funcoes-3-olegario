/* 3) Crie uma função recursiva que receba um número inteiro N e imprima todos os números naturais de 0 até N em ordem crescente. */

#include <stdio.h>

int imprimirAteN(int N){
    const int fim = N+1;
    N = 0;
    while(N!=fim){
        printf("%d\t", N);
        N++;
    }
    return printf("\n");
}

void main(){
    int n;
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    imprimirAteN(n);
}