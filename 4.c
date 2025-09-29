/* 4) Crie uma função recursiva que receba um número inteiro N e imprima todos os números naturais de 0 até N em ordem decrescente. */

#include <stdio.h>

int imprimirAteN(int N){
    printf("%d\t", N);
    if(N==0){
        return printf("%d\n", N);
    } else return imprimirAteN(N-1);
}

void main(){
    int n;
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    imprimirAteN(n);
}