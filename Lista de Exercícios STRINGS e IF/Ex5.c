#include <stdio.h>

int main() {
    int codigoLanche, quantidade;
    float valorTotal;

    printf("Código do lanche: ");
    scanf("%d", &codigoLanche);

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    if (codigoLanche == 100) {
        valorTotal = quantidade * 5.00;
        printf("Pedido: %d unidade(s) de Cachorro Quente\n", quantidade);
    } else if (codigoLanche == 101) {
        valorTotal = quantidade * 6.00;
        printf("Pedido: %d unidade(s) de Bauru simples\n", quantidade);
    } else if (codigoLanche == 102) {
        valorTotal = quantidade * 8.00;
        printf("Pedido: %d unidade(s) de Bauru c/ovo\n", quantidade);
    } else if (codigoLanche == 103) {
        valorTotal = quantidade * 5.00;
        printf("Pedido: %d unidade(s) de Hamburger\n", quantidade);
    } else if (codigoLanche == 104) {
        valorTotal = quantidade * 7.50;
        printf("Pedido: %d unidade(s) de Cheeseburger\n", quantidade);
    } else if (codigoLanche == 105) {
        valorTotal = quantidade * 2.00;
        printf("Pedido: %d unidade(s) de Refrigerante\n", quantidade);
    } else {
        printf("Código de lanche inválido.\n");
    }

    printf("Total R$%.2f\n", valorTotal);

    return 0;
}

