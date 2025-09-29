/* 15) Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou seja:

Escreva uma função recursiva que calcule o valor de qualquer Hn. */

#include <stdio.h>

double serieHarmonica(int n){
    if(n == 1.0){
        return 1.0;
    } else {
        return 1.0/n + serieHarmonica(n-1);
    }
}

void main(){
    int enesimo;

    printf("Digite o enésimo termo da sequência harmônica para calcular: ");
    scanf("%d", &enesimo);

    double termo = serieHarmonica(enesimo);

    printf("H[%d] = %lf\n", enesimo, termo);
}