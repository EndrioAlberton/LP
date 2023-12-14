#include <stdio.h>

float encontrarMaior(float a, float b, float c, float d, float e) {
    float maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    if (d > maior) maior = d;
    if (e > maior) maior = e;
    return maior;
}

float calcularMedia(float a, float b, float c, float d, float e) {
    return (a + b + c + d + e) / 5.0;
}

int main() {
    float a, b, c, d, e;
    
    printf("Endrio Alberton\n");
    printf("a) criar 5 variaveis float e leia valores para cada uma. Mostre os valores armazenados em cada uma das variaveis (0,5pts). Nao usar vetor \n");
    printf("Digite o valor para a: ");
    scanf("%f", &a);
    printf("Digite o valor para b: ");
    scanf("%f", &b);
    printf("Digite o valor para c: ");
    scanf("%f", &c);
    printf("Digite o valor para d: ");
    scanf("%f", &d);
    printf("Digite o valor para e: ");
    scanf("%f", &e);
    
    printf("\nb) Escreva uma funcao que recebe como paramentro os valores float A,B,C,D,E e retorne o maior valor. (1 pts). Considere que nao havera valores repetidos. \n");
    printf("O maior valor: %.2f\n", encontrarMaior(a, b, c, d, e));
    
    printf("\nc) Escreva uma funcao que recebe como paramentro os valores float A,B,C,D,E e retorne a media dos valores valor. (1 pts). \n");    
    printf("A media dos valores: %.2f\n", calcularMedia(a, b, c, d, e));
    
    return 0;
}
