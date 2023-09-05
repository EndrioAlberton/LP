#include <stdio.h>

int main()
{
    float media;
    int faltas;
    
    printf("Informe a media do aluno:\n");
    scanf("%f", &media);  
    printf("Informe o numero de faltas do aluno:\n");
    scanf("%d", &faltas);  
    if (media <= 7 && faltas >=5){
        printf("Voce foi reprovado pela media e por faltas");
    }else{
        if (media < 7){
           printf("Voce foi reprovado pela media");
        }if ( faltas >= 5){
            printf("Voce foi reprovado por faltas");
        }if (media >= 7 && faltas <=5){
           printf("Voce foi aprovado");
        }
    }
    return 0;
}

