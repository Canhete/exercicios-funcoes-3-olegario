/* 9) Escreva uma função recursiva que receba um número inteiro positivo n. Calcule e retorne o seu fatorial n!: */

#include <stdio.h>

int fatorial(int n){
    if(n == 1 || n == 0){
        return 1;
    } else
    return n * fatorial(n-1);
}

void main(){
    int x;

    printf("Digite o número para obter o fatorial: ");
    scanf("%d", &x);

    int resultado = fatorial(x);

    printf("%d! = %d\n", x, resultado);
}