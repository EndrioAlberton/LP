#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    float salario, nSalario;

    printf("Digite o nome do funcionário: ");
    fgets(name, sizeof(name), stdin); 

    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salario);

    if (salario < 500) {
        nSalario = salario * 1.3;
        printf("Parabéns, %s seu novo salário é: %.2f\n", name, nSalario);
    } else {
        printf("%s, você não tem direito ao aumento.\n", name);
    }

    return 0;
}