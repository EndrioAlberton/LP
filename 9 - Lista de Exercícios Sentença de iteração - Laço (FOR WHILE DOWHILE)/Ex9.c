/******************************************************************************
9 - Em uma eleição presidencial existem três candidatos. Os votos são informados  através de códigos. 
Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:

Código - Nome/Rótulo
1 - Zezinho
2 - Huguinho
3 - Luizinho
4 - Voto em Branco
5 - Voto Nulo

Escreva um programa com as seguintes características:

- ler uma sequencia de votos até que o código de candidato seja igual a 0 (zero)
- o programa finaliza quando o candidato digitado é igual a 0 (zero)
- apresente o resultado de apuração dos votos:
   -- total de votos para cada candidato;
   -- total de votos nulos;
   -- total de votos em branco;
   -- candidato vencedor;
*******************************************************************************/
#include <stdio.h>

int main() {
    int voto;
    int votosZezinho = 0, votosHuguinho = 0, votosLuizinho = 0, votosBranco = 0, votosNulo = 0;

    printf("Codificação dos candidatos:\n");
    printf("1 - Zezinho\n");
    printf("2 - Huguinho\n");
    printf("3 - Luizinho\n");
    printf("4 - Voto em Branco\n");
    printf("5 - Voto Nulo\n");

    while (1) {
        printf("Digite o código do candidato (ou 0 para encerrar): ");
        scanf("%d", &voto);

        if (voto == 0) {
            break;
        }

        switch (voto) {
            case 1:
                votosZezinho++;
                break;
            case 2:
                votosHuguinho++;
                break;
            case 3:
                votosLuizinho++;
                break;
            case 4:
                votosBranco++;
                break;
            case 5:
                votosNulo++;
                break;
            default:
                printf("Código de candidato inválido.\n");
                break;
        }
    }

    printf("\nResultado da apuração dos votos:\n");
    printf("Zezinho: %d votos\n", votosZezinho);
    printf("Huguinho: %d votos\n", votosHuguinho);
    printf("Luizinho: %d votos\n", votosLuizinho);
    printf("Votos em Branco: %d votos\n", votosBranco);
    printf("Votos Nulos: %d votos\n", votosNulo);

    int vencedor = 1; // votosZezinho como vencedor inicial

    if (votosHuguinho > votosZezinho && votosHuguinho > votosLuizinho) {
        vencedor = 2; 
    }

    if (votosLuizinho > votosZezinho && votosLuizinho > votosHuguinho) {
        vencedor = 3;
    }

    printf("Candidato vencedor: ");
    switch (vencedor) {
        case 1:
            printf("Zezinho\n");
            break;
        case 2:
            printf("Huguinho\n");
            break;
        case 3:
            printf("Luizinho\n");
            break;
    }

    return 0;

}
