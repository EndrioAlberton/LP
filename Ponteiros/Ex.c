#include <stdio.h>

void imprimirEnderecoConteudo(int *ptr) {
    printf("Endereço: %p, Conteúdo: %d\n", ptr, *ptr);
}

float mediaConteudo(int *ptr1, int *ptr2) {
    return (*ptr1 + *ptr2) / 2.0;
}

int maiorValor(int *ptr1, int *ptr2, int *ptr3) {
    int max = *ptr1;
    if (*ptr2 > max) max = *ptr2;
    if (*ptr3 > max) max = *ptr3;
    return max;
}

int *enderecoMaiorValor(int *ptr1, int *ptr2, int *ptr3) {
    int *maxPtr = ptr1;
    if (*ptr2 > *maxPtr) maxPtr = ptr2;
    if (*ptr3 > *maxPtr) maxPtr = ptr3;
    return maxPtr;
}

int main() {
    int var1, var2, var3, var4;

    printf("Digite o valor para a variável 1: ");
    scanf("%d", &var1);
    printf("Digite o valor para a variável 2: ");
    scanf("%d", &var2);
    printf("Digite o valor para a variável 3: ");
    scanf("%d", &var3);
    printf("Digite o valor para a variável 4: ");
    scanf("%d", &var4);

    imprimirEnderecoConteudo(&var1);
    imprimirEnderecoConteudo(&var2);
    imprimirEnderecoConteudo(&var3);
    imprimirEnderecoConteudo(&var4);

    float media = mediaConteudo(&var1, &var2);
    printf("Média entre var1 e var2: %.2f\n", media);

    int max = maiorValor(&var1, &var2, &var3);
    printf("Maior valor entre var1, var2 e var3: %d\n", max);

    int *maxPtr = enderecoMaiorValor(&var1, &var2, &var3);
    printf("Endereço do maior valor entre var1, var2 e var3: %p\n", maxPtr);

    return 0;
}
