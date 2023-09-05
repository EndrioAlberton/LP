#include <stdio.h>

int main() {
    float valorDolar, cotacaoDolar, valorReal ;

    printf("Quantidade em dólares: ");
    scanf("%f", &valorDolar);

    printf("Cotação do dólar: ");
    scanf("%f", &cotacaoDolar);

    valorReal = valorDolar * cotacaoDolar;
    printf("$%.2f dólares equivalem a R$%.2f reais.\n", valorDolar, valorReal);

    return 0;
}