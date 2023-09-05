#include <stdio.h>

int main() {
    float nota1, nota2, trabalho, media;
    int faltas;
    char conceito;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);

    printf("Digite a nota do trabalho: ");
    scanf("%f", &trabalho);

    printf("Digite o número de faltas: ");
    scanf("%d", &faltas);

    media = (nota1 + nota2 + trabalho) / 3;

    if (faltas >= 5) {
        printf("E - Reprovado por faltas\n");
    } else if (media >= 8.0) {
        printf("A - Aprovado\n");
    } else if (media >= 7.0) {
        printf("B - Aprovado\n");
    } else if (media >= 6.0) {
        printf("C - Aprovado\n");
    } else {
        printf("D - Reprovado\n");
    }

    return 0;
}
