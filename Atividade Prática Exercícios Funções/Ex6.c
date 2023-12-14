/******************************************************************************

6 - Escreva programa que Leia turno e língua.
Esse programa deve ter uma função receba como parâmetros: Língua e Turno e imprima na tela a saudação correta.
os parâmetros para língua são: 1 português, 2 inglês, 3 espanhol, 4 italiano, 5 alemão. (pesquisar as saudações no google :)
Para o turno o parâmetro é dado pelos caracteres 'm', 't' e 'n'.
O programa deve repetir o processo até que a língua informada seja '0' (zero); 

Exemplo incompleto:

Língua

Turno

Resposta

Português (1)

manhã (m)

BOM DIA

Português (1)

tarde (t)

BOA TARDE

Português (1)

noite (n)

BOA NOITE

Inglês (2)

manhã (m)

GOOD MORNING

Inglês (2)

tarde (t)

GOOD AFTERNOON

Inglês (2)

noite (n)

GOOD NIGHT

 sugestão: escreva uma função para cada língua, que receba como parâmetro o turno: ex:

void ingles(char turno){
    switch(turno){     
                 .....
    }
}

*******************************************************************************/

#include <stdio.h>

void portugues(char turno) {
    switch (turno) {
        case 'm':
            printf("BOM DIA\n");
            break;
        case 't':
            printf("BOA TARDE\n");
            break;
        case 'n':
            printf("BOA NOITE\n");
            break;
        default:
            printf("Turno desconhecido\n");
    }
}

void ingles(char turno) {
    switch (turno) {
        case 'm':
            printf("GOOD MORNING\n");
            break;
        case 't':
            printf("GOOD AFTERNOON\n");
            break;
        case 'n':
            printf("GOOD NIGHT\n");
            break;
        default:
            printf("Turno desconhecido\n");
    }
}

void espanhol(char turno) {
    switch (turno) {
        case 'm':
            printf("BUENOS DÍAS\n");
            break;
        case 't':
            printf("BUENAS TARDES\n");
            break;
        case 'n':
            printf("BUENAS NOCHES\n");
            break;
        default:
            printf("Turno desconhecido\n");
    }
}

void italiano(char turno) {
    switch (turno) {
        case 'm':
            printf("BUONGIORNO\n");
            break;
        case 't':
            printf("BUON POMERIGGIO\n");
            break;
        case 'n':
            printf("BUONA NOTTE\n");
            break;
        default:
            printf("Turno desconhecido\n");
    }
}

void alemao(char turno) {
    switch (turno) {
        case 'm':
            printf("GUTEN MORGEN\n");
            break;
        case 't':
            printf("GUTEN NACHMITTAG\n");
            break;
        case 'n':
            printf("GUTE NACHT\n");
            break;
        default:
            printf("Turno desconhecido\n");
    }
}

int main() {
    int lingua;
    char turno;

    do {
        printf("Informe a língua (1-Português, 2-Inglês, 3-Espanhol, 4-Italiano, 5-Alemão, 0-Sair): ");
        scanf("%d", &lingua);

        if (lingua == 0) {
            break; // Sai do programa se a língua for 0
        }

        printf("Informe o turno (m-manhã, t-tarde, n-noite): ");
        scanf(" %c", &turno);

        switch (lingua) {
            case 1:
                portugues(turno);
                break;
            case 2:
                ingles(turno);
                break;
            case 3:
                espanhol(turno);
                break;
            case 4:
                italiano(turno);
                break;
            case 5:
                alemao(turno);
                break;
            default:
                printf("Língua desconhecida\n");
        }
    } while (lingua != 0);

    return 0;
}



