#include <stdio.h>

int main() {
    int id;
    float aSalario, nSalario;
    
    printf("Código    Cargo           Aumento\n");
    printf("1         Escriturário    30%\n");
    printf("2         Secretário      25%\n");
    printf("3         Caixa           20%\n");
    printf("4         Gerente         10%\n");
    printf("5         Diretor         0%\n");

    printf("Digite o código da função (1 a 5): ");
    scanf("%d", &id);
    printf("Digite o salário atual: ");
    scanf("%f", &aSalario);

    switch (id) {
        case 1:
            nSalario = aSalario * 1.3;
            break;
        case 2:
            nSalario = aSalario * 1.25;
            break;
        case 3:
            nSalario = aSalario * 1.2;
            break;
        case 4:
            nSalario = aSalario * 1.1;
            break;
        case 5:
            nSalario = aSalario;
            break;
        default:
            printf("Código de função inválido.");
            return 1;
    }
    printf("Novo salário: R$%.2f", nSalario);

    return 0;
}
