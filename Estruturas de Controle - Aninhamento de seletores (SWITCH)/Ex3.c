#include <stdio.h>

int main() {
    int codigo;
    float pUnid;
    int qtde;

    printf("Código  Especificação               Preço Unitário\n");
    printf("100     Cachorro Quente             R$ 10,00\n");
    printf("101     Bauru Simples               R$ 13,00\n");
    printf("102     Bauru com Ovo               R$ 16,00\n");
    printf("103     Hambúrguer Tradicional      R$ 14,00\n");
    printf("104     Cheeseburguer Deluxe        R$ 16,00\n");
    printf("105     Refrigerante (350ml)        R$  4,00\n");
    
    printf("Digite o código do item pedido: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &qtde);

    switch (codigo) {
        case 100:
            pUnid = 10.00;
            break;
        case 101:
            pUnid = 13.00;
            break;
        case 102:
            pUnid = 16.00;
            break;
        case 103:
            pUnid = 14.00;
            break;
        case 104:
            pUnid = 16.00;
            break;
        case 105:
            pUnid = 4.00;
            break;
        default:
            printf("Código de item inválido.");
            return 1; 
    }

    float total = pUnid * qtde;

    printf("Valor a ser pago: R$%.2f\n", total);

    return 0;
}
