#include <stdio.h>

int main()
{
    float num1, num2;
    
    printf("Vamos somar dois numeros! \n");
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("A soma dos dois número é: %.2f", num1+num2);

    return 0;
}
