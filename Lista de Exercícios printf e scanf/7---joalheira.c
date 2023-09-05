#include <stdio.h>

int main() {
    float precoUnit, total;
    int quant;

    printf("Digite o preço unitário do produto: ");
    scanf("%f", &precoUnit);

    printf("Digite a quantidade do produto: ");
    scanf("%d", &quant);

    total = precoUnit * quant;

    float premio = total * 2;

    printf("Total gasto pelo cliente: R$%.2f\n", total);
    printf("Valor do prêmio: R$%.2f\n", premio);

    return 0;
}