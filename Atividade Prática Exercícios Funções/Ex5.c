/******************************************************************************

5 - O cardápio de uma lancheria é o seguinte:
Código do lanche | Especificação   | Preço unitário
100              | Cachorro quente | 11,00
101              | Bauru simples   | 13,00
102              | Bauru c/ovo     | 15,00
103              | Hamburger       | 11,00
104              | Cheeseburger    | 13,00
105              | Refrigerante    | 3,00

O programa deverá apresentar as seguintes opções:
A - Novo pedido (Zerar Valor total do pedido)
B - Incluir Item e quantidade
C - Fechar pedido e Imprimir total (Apenas valor, somar total ao total do dia)
D - Total do Dia (apenas valor)
E - SAIR do programa
O Programa deverá ter uma função que receba como parâmetros o código do item e a quantidade, 
esta função deverá retornar o valor daquela quantidade de items.

*******************************************************************************/

#include <stdio.h>

float calcularValorItem(int codigo, int quantidade) {
    float valorUnitario = 0.0;
    
    switch (codigo) {
        case 100:
            valorUnitario = 11.00;
            break;
        case 101:
            valorUnitario = 13.00;
            break;
        case 102:
            valorUnitario = 15.00;
            break;
        case 103:
            valorUnitario = 11.00;
            break;
        case 104:
            valorUnitario = 13.00;
            break;
        case 105:
            valorUnitario = 3.00;
            break;
        default:
            printf("Código de item inválido.\n");
            return 0;
    }
    
    return valorUnitario * quantidade;
}

int main() {
    char opcao;
    float totalDoDia = 0.0;
    float totalDoPedido = 0.0;

    while (1) {
        printf("\nOpções:\n");
        printf("A - Novo pedido\n");
        printf("B - Incluir Item e quantidade\n");
        printf("C - Fechar pedido e Imprimir total\n");
        printf("D - Total do Dia\n");
        printf("E - SAIR do programa\n");

        printf("Escolha uma opção: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'A':
            case 'a':
                totalDoPedido = 0.0;
                printf("Novo pedido iniciado. Valor total do pedido zerado.\n");
                break;

            case 'B':
            case 'b':
                {
                    int codigo, quantidade;
                    printf("Digite o código do item: ");
                    scanf("%d", &codigo);
                    printf("Digite a quantidade: ");
                    scanf("%d", &quantidade);
                    
                    float valorItem = calcularValorItem(codigo, quantidade);
                    if (valorItem > 0.0) {
                        totalDoPedido += valorItem;
                        printf("Item adicionado ao pedido. Valor total do pedido: %.2f\n", totalDoPedido);
                    }
                }
                break;

            case 'C':
            case 'c':
                if (totalDoPedido > 0.0) {
                    totalDoDia += totalDoPedido;
                    printf("Pedido fechado. Valor total do pedido: %.2f\n", totalDoPedido);
                    totalDoPedido = 0.0;
                } else {
                    printf("Nenhum item no pedido para fechar.\n");
                }
                break;

            case 'D':
            case 'd':
                printf("Total do Dia: %.2f\n", totalDoDia);
                break;

            case 'E':
            case 'e':
                printf("Saindo do programa.\n");
                return 0;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}



