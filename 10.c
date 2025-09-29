/* 10) Escreva uma função recursiva que receba um número inteiro, maior ou igual a zero, e retorne o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. */

#include <stdio.h>

unsigned int fibonacci(unsigned int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

void main(){
    unsigned int x;

    printf("Digite o n termo da sequência de Fibonacci para imprimir: ");
    scanf("%d", &x);

    unsigned int resultado = fibonacci(x);

    printf("O %d termo da sequência de Fibonacci é %d\n", x, resultado);
}