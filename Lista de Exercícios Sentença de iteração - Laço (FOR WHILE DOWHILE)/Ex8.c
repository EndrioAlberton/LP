/******************************************************************************

8 - O cardápio de uma lancheria é o seguinte:
Código do lanche - Especificação - Preço unitário
100 - Cachorro quente - 11,00
101 - Bauru simples - 13,00 
102 - Bauru c/ovo - 15,00
103 - Hamburger - 11,00
104 - Cheeseburger - 13,00
105 - Refrigerante - 3,00

Escrever um programa que leia o código do item pedido, 
a quantidade e calcule o valor a ser pago por aquele lanche. 
Os itens serão lidos até que seja incluído um código inválido, 
encerrando o pedido. Ao final, escreva o valor total do pedido.

*******************************************************************************/
#include <stdio.h>

int main() {
    int codigo;
    int quantidade;
    float total = 0;

    printf("Cardápio da lancheria:\n");
    printf("Código do lanche - Especificação - Preço unitário\n");
    printf("100 - Cachorro quente - 11,00\n");
    printf("101 - Bauru simples - 13,00\n");
    printf("102 - Bauru c/ovo - 15,00\n");
    printf("103 - Hamburger - 11,00\n");
    printf("104 - Cheeseburger - 13,00\n");
    printf("105 - Refrigerante - 3,00\n");

    for (;;) {
        printf("Digite o código do item pedido (ou um código inválido para encerrar): ");
        scanf("%d", &codigo);

        if (codigo < 100 || codigo > 105) {
            break;
        }

        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidade);

        float preco_unitario;

        switch (codigo) {
            case 100:
                preco_unitario = 11.00;
                break;
            case 101:
                preco_unitario = 13.00;
                break;
            case 102:
                preco_unitario = 15.00;
                break;
            case 103:
                preco_unitario = 11.00;
                break;
            case 104:
                preco_unitario = 13.00;
                break;
            case 105:
                preco_unitario = 3.00;
                break;
            default:
                printf("Código de item inválido.\n");
                continue;
        }

        float subtotal = preco_unitario * quantidade;
        total += subtotal;
        printf("Subtotal para o item: R$%.2f\n", subtotal);
    }

    printf("Total do pedido: R$%.2f\n", total);

    return 0;
}

