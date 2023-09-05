#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    float salarioAtual, novoSalario;
    int codigoFuncao;

    printf("Digite o nome do funcionário: ");
    fgets(nome, sizeof(nome), stdin); 

    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salarioAtual);
    
    printf("Código | Cargo        | Aumento\n");
    printf("1      | Escriturário | 30%%\n");
    printf("2      | Secretário   | 25%%\n");
    printf("3      | Caixa        | 20%%\n");
    printf("4      | Gerente      | 10%%\n");
    printf("5      | Diretor      | 1%%\n");


    printf("Digite o código da função (1 a 5): ");
    scanf("%d", &codigoFuncao);

    if (codigoFuncao == 1) {
        novoSalario = salarioAtual * 1.3; 
    } else if (codigoFuncao == 2) {
        novoSalario = salarioAtual * 1.25;  
    } else if (codigoFuncao == 3) {
        novoSalario = salarioAtual * 1.2;  
    } else if (codigoFuncao == 4) {
        novoSalario = salarioAtual * 1.1;  
    } else if (codigoFuncao == 5) {
        novoSalario = salarioAtual * 1.01;  
    } else {
        printf("Código de função inválido. O funcionário não possui um aumento definido.\n");
    }

    printf("Novo salário para %s: %.2f\n", nome, novoSalario);

    return 0;
}
