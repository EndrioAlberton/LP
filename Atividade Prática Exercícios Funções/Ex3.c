/******************************************************************************

3 - Escreva um programa que apresente leia dois números e apresente as seguintes opções:
A - Somar 2 números
B - Multiplicar 2 números
C - Dividir 2 Números
D -  Subtrair 2 Números

*******************************************************************************/

#include <stdio.h>

int somar(int num1, int num2) {
    return num1 + num2;
}

int multiplicar(int num1, int num2) {
    return num1 * num2;
}

float dividir(float num1, float num2) {
    if (num2 == 0) {
        printf("Erro! Divisão por zero não é permitida.\n");
        return 0;
    }
    return num1 / num2;
}

int subtrair(int num1, int num2) {
    return num1 - num2;
}

int main() {
    int num1, num2;
    char opcao;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Escolha a operação (A -> soma, B -> multiplicação, C -> para divisão, -> para subtração): ");
    scanf(" %c", &opcao);

    switch (opcao) {
        case 'A':
            printf("Resultado da soma: %d\n", somar(num1,num2));
            break;
        case 'B':
            printf("Resultado da multiplicação: %d\n", multiplicar(num1,num2));
            break;
        case 'C':
            if (dividir(num1,num2) != 0) {
                printf("Resultado da divisão: %.2f\n", dividir(num1,num2));
            }
            break;
        case 'D':
            printf("Resultado da subtração: %d\n", subtrair(num1,num2));
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
