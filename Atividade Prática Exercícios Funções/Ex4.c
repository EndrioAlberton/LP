/******************************************************************************

5 - O cardápio de uma lancheria é o seguinte:
Código do lanche | Especificação   | Preço unitário
100              | Cachorro quente | 11,00
101              | Bauru simples   | 13,00
102              | Bauru c/ovo     | 15,00
103              | Hamburger       | 11,00
104              | Cheeseburger    | 13,00
105              | Refrigerante    | 3,00

O programa deverá apresentar as seguintes opções:
A - Novo pedido (Zerar Valor total do pedido)
B - Incluir Item e quantidade
C - Fechar pedido e Imprimir total (Apenas valor, somar total ao total do dia)
D - Total do Dia (apenas valor)
E - SAIR do programa
O Programa deverá ter uma função que receba como parâmetros o código do item e a quantidade, 
esta função deverá retornar o valor daquela quantidade de items.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

float soma(float operador1, float operador2) {
    return operador1 + operador2;
}

float subtracao(float operador1, float operador2) {
    return operador1 - operador2;
}

float divisao(float base, float divisor) {
    if (divisor == 0) {
        printf("Não é possível dividir por zero.\n");
        return 0.0;
    }
    return base / divisor;
}

float multiplicacao(float base, float multiplicador) {
    return base * multiplicador;
}

float fatorial(float numero) {
    if (numero < 0) {
        printf("Fatorial não está definido para números negativos.\n");
        return 0.0;
    }
    float resultado = 1.0;
    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }
    return resultado;
}

float potencia(float base, float potencia) {
    return pow(base, potencia);
}

int main() {
    char opcao;
    
    while (1) {
        printf("\nOpções:\n");
        printf("a - Soma\n");
        printf("b - Subtração\n");
        printf("c - Divisão\n");
        printf("d - Multiplicação\n");
        printf("e - Fatorial\n");
        printf("f - Potência\n");
        printf("g - SAIR\n");
        
        printf("Escolha uma opção: ");
        scanf(" %c", &opcao);
        
        float resultado;
        
        switch (opcao) {
            case 'a':
                {
                    float operador1, operador2;
                    printf("Digite o primeiro operador: ");
                    scanf("%f", &operador1);
                    printf("Digite o segundo operador: ");
                    scanf("%f", &operador2);
                    resultado = soma(operador1, operador2);
                }
                break;
                
            case 'b':
                {
                    float operador1, operador2;
                    printf("Digite o primeiro operador: ");
                    scanf("%f", &operador1);
                    printf("Digite o segundo operador: ");
                    scanf("%f", &operador2);
                    resultado = subtracao(operador1, operador2);
                }
                break;
                
            case 'c':
                {
                    float base, divisor;
                    printf("Digite a base: ");
                    scanf("%f", &base);
                    printf("Digite o divisor: ");
                    scanf("%f", &divisor);
                    resultado = divisao(base, divisor);
                }
                break;
                
            case 'd':
                {
                    float base, multiplicador;
                    printf("Digite a base: ");
                    scanf("%f", &base);
                    printf("Digite o multiplicador: ");
                    scanf("%f", &multiplicador);
                    resultado = multiplicacao(base, multiplicador);
                }
                break;
                
            case 'e':
                {
                    float numero;
                    printf("Digite um número para calcular o fatorial: ");
                    scanf("%f", &numero);
                    resultado = fatorial(numero);
                }
                break;
                
            case 'f':
                {
                    float base, pot;
                    printf("Digite a base: ");
                    scanf("%f", &base);
                    printf("Digite a potência: ");
                    scanf("%f", &pot);
                    resultado = potencia(base, pot);
                }
                break;
                
            case 'g':
                printf("Saindo do programa.\n");
                return 0;
                
            default:
                printf("Opção inválida. Tente novamente.\n");
                continue;
        }
        
        printf("Resultado: %.2f\n", resultado);
    }
    
    return 0;
}


