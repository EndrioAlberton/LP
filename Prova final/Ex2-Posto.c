#include <stdio.h>

float calcularVenda(int codigo, float quantidade) {
    float precoLitro = 0;
    
    switch(codigo) {
        case 11:
            precoLitro = 5.30;
            break;
        case 22:
            precoLitro = 5.80;
            break;
        case 33:
            precoLitro = 4.50;
            break;
        case 44:
            precoLitro = 6.50;
            break;
        default:
            printf("Codigo de combustivel invalido.\n");
            return 0;
    }
    return quantidade * precoLitro;
}

int main() {
    int codigo;
    float quantidade, totalVendas = 0;
    float totalGasolinaComum = 0, totalGasolinaAditivada = 0, totalEtanol = 0, totalDiesel = 0;
    
    while(1) {
        printf("Digite o codigo do combustivel (ou 77 para encerrar): ");
        scanf("%d", &codigo);
        
        if(codigo == 77) {
            break;
        }
    
        if(codigo != 11 && codigo != 22 && codigo != 33 && codigo != 44) {
            printf("Codigo de combustivel invalido.\n");
            continue;
        }
        printf("Digite a quantidade em litros: ");
        scanf("%f", &quantidade);
        
        float valorVenda = calcularVenda(codigo, quantidade);
        
        if(valorVenda > 0) {
            totalVendas += valorVenda;
            switch(codigo) {
                case 11:
                    totalGasolinaComum += quantidade;
                    break;
                case 22:
                    totalGasolinaAditivada += quantidade;
                    break;
                case 33:
                    totalEtanol += quantidade;
                    break;
                case 44:
                    totalDiesel += quantidade;
                    break;
            }
            printf("Valor da venda: R$%.2f\n", valorVenda);
        }
    }
    
    printf("\nResumo das vendas de Endrio Alberton:\n");
    
    printf("Foram vendidos %.1f Litros de Gasolina Comum a R$%.2f\n", totalGasolinaComum, totalGasolinaComum * 5.30);
    printf("Foram vendidos %.1f Litros de Gasolina Aditivada a R$%.2f\n", totalGasolinaAditivada, totalGasolinaAditivada * 5.80);
    printf("Foram vendidos %.1f Litros de Etanol a R$%.2f\n", totalEtanol, totalEtanol * 4.50);
    printf("Foram vendidos %.1f Litros de Diesel a R$%.2f\n", totalDiesel, totalDiesel * 6.50);
    printf("Total de Vendas: %.1f Litros de combustivel a R$%.2f\n", totalGasolinaComum + totalGasolinaAditivada + totalEtanol + totalDiesel, totalVendas);

    return 0;
}
