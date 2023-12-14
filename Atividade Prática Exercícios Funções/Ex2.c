/******************************************************************************

2 - Escreva um programa que leia 3 números. 
O programa deve apresentar a soma e o produto dos 3 números. 
O programa deve ter uma função que recebe os três números e retorna a soma, 
e outra função que recebe os três números e retorna o produto.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int soma(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

int produto(int num1, int num2, int num3) {
    return num1 * num2 * num3;
}

int main() {
    int num1, num2, num3;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    printf("A soma dos números é %d\n", soma(num1, num2, num3));
    printf("O produto dos números é %d\n", produto(num1, num2, num3));

    return 0;
}


