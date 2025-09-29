/* 8) A multiplicação de dois números inteiros pode ser feita através de somas sucessivas (por exemplo, 2 * 3 = 2 + 2 + 2). Crie uma função recursiva que calcule a multiplicação por somas sucessivas de dois inteiros.*/

#include <stdio.h>

int multiplicarPorSoma(int x, int y){
    if(y == 1){
        return x;
    }
    return x + multiplicarPorSoma(x, y-1);
}

void main(){
    int a,b;

    printf("Digite o número: ");
    scanf("%d", &a);

    printf("Digite quantas vezes somar esse número: ");
    scanf("%d", &b);

    int resultado = multiplicarPorSoma(a, b);

    printf("a * b = %d\n", resultado);
}