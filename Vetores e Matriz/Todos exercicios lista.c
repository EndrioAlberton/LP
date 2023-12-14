#include <stdio.h>

int main() {
    int escolha;

    printf("Escolha a questao (1 a 7): ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1: {
            int numeros[10];

            printf("Digite 10 numeros inteiros:\n");
            for (int i = 0; i < 10; i++) {
                scanf("%d", &numeros[i]);
            }

            printf("Numeros na ordem correta: ");
            for (int i = 0; i < 10; i++) {
                printf("%d ", numeros[i]);
            }

            printf("\nNumeros na ordem inversa: ");
            for (int i = 9; i >= 0; i--) {
                printf("%d ", numeros[i]);
            }
            printf("\n");
            break;
        }
        case 2: {
            int numeros[10];
            int soma = 0;

            printf("Digite 10 numeros inteiros:\n");
            for (int i = 0; i < 10; i++) {
                scanf("%d", &numeros[i]);
                soma += numeros[i];
            }

            printf("A soma dos 10 numeros e: %d\n", soma);
            break;
        }
        case 3: {
            double numerosReais[10];
            double multiplicacao = 1.0;

            printf("Digite 10 numeros reais:\n");
            for (int i = 0; i < 10; i++) {
                scanf("%lf", &numerosReais[i]);
                multiplicacao *= numerosReais[i];
            }

            printf("O resultado da multiplicacao dos 10 numeros reais e: %.2lf\n", multiplicacao);
            break;
        }
        case 4: {
            int numerosInt[10];
            char caracteres[10];

            for (int i = 0; i < 10; i++) {
                numerosInt[i] = i + 1;
                caracteres[i] = 65 + i;
            }

            printf("Vetores intercalados: ");
            for (int i = 0; i < 10; i++) {
                printf("%da%c", numerosInt[i], caracteres[i]);
            }
            printf("\n");
            break;
        }
        case 5: {
            int notasAlunos[10];
            int somaNotas = 0;
            int alunosAprovados = 0;
            int alunosReprovados = 0;

            printf("Digite as notas de 10 alunos:\n");
            for (int i = 0; i < 10; i++) {
                scanf("%d", &notasAlunos[i]);
                somaNotas += notasAlunos[i];

                if (notasAlunos[i] >= 7) {
                    alunosAprovados++;
                } else {
                    alunosReprovados++;
                }
            }

            double mediaClasse = (double)somaNotas / 10.0;

            printf("a - A media da classe e: %.2lf\n", mediaClasse);
            printf("b - A quantidade de alunos aprovados e: %d\n", alunosAprovados);
            printf("c - A quantidade de alunos reprovados e: %d\n", alunosReprovados);
            break;
        }
        case 6: {
            int valor, notasCaixa[7] = {100, 50, 20, 10, 5, 2, 1};

            printf("Digite o valor em reais: ");
            scanf("%d", &valor);

            printf("Notas necessarias:\n");

            for (int i = 0; i < 7; i++) {
                int qtdNotas = valor / notasCaixa[i];
                valor %= notasCaixa[i];

                if (qtdNotas > 0) {
                    printf("%d nota(s) de R$ %d\n", qtdNotas, notasCaixa[i]);
                }
            }
            break;
        }
        case 7: {
            int matriz[3][3];

            printf("Digite os elementos da matriz 3x3:\n");
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    scanf("%d", &matriz[i][j]);
                }
            }

            printf("Matriz:\n");
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    printf("%d ", matriz[i][j]);
                }
                printf("\n");
            }

            int maior = matriz[0][0];
            int menor = matriz[0][0];
            int somaMatriz = 0;
            double mediaMatriz;
            int somaPrimeiraLinha = 0;
            int produtoDiagonalPrincipal = 1;

            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (matriz[i][j] > maior) {
                        maior = matriz[i][j];
                    }

                    if (matriz[i][j] < menor) {
                        menor = matriz[i][j];
                    }

                    somaMatriz += matriz[i][j];

                    if (i == 0) {
                        somaPrimeiraLinha += matriz[i][j];
                    }

                    if (i == j) {
                        produtoDiagonalPrincipal *= matriz[i][j];
                    }
                }
            }

            mediaMatriz = (double)somaMatriz / 9.0;

            printf("a - O maior numero na matriz e: %d\n", maior);
            printf("b - O menor numero na matriz e: %d\n", menor);
            printf("c - A media dos numeros na matriz e: %.2lf\n", mediaMatriz);
            printf("d - A soma dos elementos da primeira linha e: %d\n", somaPrimeiraLinha);
            printf("e - O produto dos elementos da diagonal principal e: %d\n", produtoDiagonalPrincipal);
            break;
        }
        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}
