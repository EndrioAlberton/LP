#include <stdio.h>

int main()
{
    int idFuncionario;
    float salario, INPC, indiceProdutividade, aumento, novoSalario;
    
    printf("Digite o número do funcionario: ");
    scanf("%d", &idFuncionario);
    printf("Digite o valor do salário atual: ");
    scanf("%f", &salario);
    printf("Digite o valor do INPC: ");
    scanf("%f", &INPC);
    printf("Digite o indice de produtividade: ");
    scanf("%f", &indiceProdutividade);
    
    aumento=salario*(0.75*(INPC/100))+salario*(indiceProdutividade/100);
    novoSalario= salario+aumento;
    
    printf("O funcionario %d\n", idFuncionario);
    printf("Teve um amento de: R$%.2f\n", aumento);
    printf("Seu novo salário é R$%.2f\n", novoSalario);
    
    return 0;
}
