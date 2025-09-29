/* 13) Faça uma função recursiva que calcule o valor da série S descrita a seguir para um valor n maior do que zero a ser fornecido como parâmetro para ela: */

#include <stdio.h>

double somaS(int n){
    if(n==1){
        return 2.0;
    } else
    return (1.0 + n * n) / n +  somaS(n-1);
}

void main(){
    int n;

    printf("Digite até que termo somar da sequência: ");
    scanf("%d", &n);

    double soma = somaS(n);

    printf("S[%d] = %lf\n", n, soma);
}