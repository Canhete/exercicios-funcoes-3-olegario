/* 1) Escreva uma função recursiva que calcule a soma dos primeiros n cubos: */
/* 1 ^ 3 = 1
    2 ^ 3 = 8
    3 ^ 3 =  21
*/

#include <stdio.h>
#include <math.h>

int somaNcubos(int n){
    int cubo = n*n*n;
    if(cubo==n){
        return 1;
    } else {
        return cubo + somaNcubos(n-1);
    }
}

void main(){
    int x;

    printf("Digite n cubos para somar: ");
    scanf("%d", &x);

    int somaTotal = somaNcubos(x);

    printf("Soma[%d]: %d\n", x, somaTotal);
}