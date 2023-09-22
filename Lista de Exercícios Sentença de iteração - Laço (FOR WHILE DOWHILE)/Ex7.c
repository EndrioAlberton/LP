/******************************************************************************
7 - A poupança rende 0,5% ao mês. Se eu depositar R$100 reais todos os meses, qual o valor que terei mês a mês em 2 ANOS?

Ex:
MES 1: 100,00
MES 2: 200,50 (R$0,50 de juros + 100 de Deposito)
MES 3: 301,5025 (1,0025 de juros + 100 de Deposito)
***Não é necessário decompor o resultad
*******************************************************************************/
#include <stdio.h>

int main()
{
    int mes; 
    float deposito = 100.00, jurosFixo = 0.005, jurosAdicional, resultado = deposito;
    
    printf("MES %d: R$ %2.f \n", mes + 1, resultado);
    for (mes = 2; mes <= 24; mes++){
        jurosAdicional = resultado * jurosFixo;
        resultado += resultado * jurosFixo + deposito;
        printf("MES %d: R$ %.4f ( R$ %f de juros +  R$ %.2f de deposito) \n", mes, resultado, jurosAdicional, deposito);
    }
    return 0;
}
