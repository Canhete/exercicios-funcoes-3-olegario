/* 11) Escreva uma função recursiva que receba um valor inteiro e o retorne invertido. Exemplo:
Número lido = 123.Número retornado = 321. */

#include <stdio.h>
#include <math.h>

int contadorDigitos(int n){
    if(n==0) {
        return 0;
    } else
    return 1 + contadorDigitos(n/10);
}

int inverter(int n){
    if(n<10){   // No caso de um único dígito decimal
        return n;
    }
    int quantidade = contadorDigitos(n) - 1;
    return (n % 10) * pow(10, quantidade) + inverter(n / 10);
}

void main(){
    int x;

    printf("Digite um número inteiro para inverter: ");
    scanf("%d", &x);

    int resultado = inverter(x);

    printf("%d\n", resultado);
}