/* 7) Escreva uma função recursiva que receba por parâmetro dois valores inteiros x e y e calcule e retorne o resultado de x^y para o programa principal. */

#include <stdio.h>

double potencia(double x, double y){
    if(y == 0){
        return 1;
    } else
    return x * potencia(x, y-1);
}

void main(){
    double a, b;

    printf("Digite a base: ");
    scanf("%lf", &a);

    printf("Digite o expoente: ");
    scanf("%lf", &b);

    double resultado = potencia(a, b);

    printf("a^b = %.lf\n", resultado);
}