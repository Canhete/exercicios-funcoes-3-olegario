/* 12) Escreva uma função recursiva que receba um valor inteiro em base decimal e o imprima em base binária. */

#include <stdio.h>

int converterBinario(int decimal){
    if(decimal == 0){
        return 0;
    } else
    return 
        (decimal % 2) + 10 * converterBinario(decimal / 2);
}

void main(){
    int decimal;

    printf("Digite um número decimal para converter: ");
    scanf("%d", &decimal);

    int binario = converterBinario(decimal);

    printf("Esse número em binário é %d\n", binario);
}