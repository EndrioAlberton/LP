#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso em quilos: ");
    scanf("%f", &peso);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Situação: Abaixo do peso");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Situação: Peso ideal");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Situação: Sobrepeso");
    } else if (imc >= 30 && imc < 34.9) {
        printf("Situação: Obesidade I");
    } else if (imc >= 35 && imc < 39.9) {
        printf("Situação: Obesidade II");
    } else {
        printf("Situação: Obesidade III");
    }

    return 0;
}

