#include <stdio.h>

int main() {
    float valorReais, cotacaoDolar, valorDolares;

    printf("Digite o valor em reais: ");
    scanf("%f", &valorReais);

    printf("Digite a cotação do dólar: ");
    scanf("%f", &cotacaoDolar);

    valorDolares = valorReais / cotacaoDolar;

    printf("R$%.2f reais equivalem a $%.2f dolares.\n", valorReais, valorDolar);

    return 0;
}

