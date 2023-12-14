#include <stdio.h>

int linhas = 9, colunas = 9, aux = 9;

int lerMatriz(int matriz[linhas][colunas]) {
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int somaPares(int matriz[linhas][colunas]) {
    int par = 2;
    int soma = 0;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            if (matriz[i][j] % par == 0) {
                soma += matriz[i][j];
            }
        }
    }
    return soma;
}

int maiorDivisivel7(int matriz[linhas][colunas]) {
    int maior = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if ((matriz[i][j] % 7 == 0)&&(matriz[i][j] > maior)) maior = matriz[i][j];
        }
    }
    return maior;
}

int somaLinha(int matriz[linhas][colunas], int linha) {
    int soma = 1;
    int i;
    for (i = 0; i < linhas; i++) {
        soma += matriz[linha][i];
    }
    return soma;
}
    
float mediaMatriz(int matriz[linhas][colunas]) {
    float soma = 0;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            soma += matriz[i][j];
        }
    }
    return soma / (linhas * colunas);
}

int main() {
    int matriz[linhas][colunas];

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            matriz[i][j] = (i * linhas + j + 1) * 13;
        }
    }

    printf("a) preenchimento correto da matriz e exibir corretamente a matriz (0,5pts). (usar repeticao)\n");
    lerMatriz(matriz);

    printf("\nEndrio Alberton\n");

    printf("\nb) Calcular e apresentar a SOMA DOS ELEMENTOS PARES da Matriz. Obrigatorio usar repeticao. 1pt)\n");
    printf("Soma dos elementos pares: %d", somaPares(matriz));

    printf("\n\nc) Buscar na matriz qual o MAIOR VALOR DIVISIVEL POR 7, apresentar o;(usar repeticao)1pt \n");
    printf("Maior valor DIVISIVEL por 7: %d", maiorDivisivel7(matriz));

    printf("\n\n d) Definir uma funcao que recebe uma matriz como paramentro e o numero da LINHA; a funcao deve receber o indice da linha como parametro e calcular a SOMA da LINHA\n");
    for (int i = 0; i < linhas; ++i) {
        printf("\nSoma da linha %d: %d", i + 1, somaLinha(matriz, i));
    }
    
    printf("\n\ne) Definir funcao que calcula a media de toda a matriz; a funcao devera receber a matriz como paramentro. 0,5pt\n");
    printf("\nMedia da matriz: %.2f", mediaMatriz(matriz));

    return 0;
}


