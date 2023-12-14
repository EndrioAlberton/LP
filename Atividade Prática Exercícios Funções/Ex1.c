/******************************************************************************

1 - Escreva um programa que leia um número e escreva este número elevado ao quadrado.
O programa deve ter uma função que recebe um número como parâmetro e retorne este número elevado ao quadrado

*******************************************************************************/

#include <stdio.h>

int calcularQuadrado(int numero){
    return numero*numero;
}

int main()
{
    int numero;
    
    printf("Digite o numero que deseja elavar ao quadrado: ");
    scanf("%d", &numero);
    printf("O quadrado do numero é %d", calcularQuadrado(numero));
    return 0;
}
