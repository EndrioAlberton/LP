/******************************************************************************

0 – Escreva um programa que:
 X leia duas strings;
 X compare as duas: informe se as duas são iguais ou diferentes entre si;
 X indique a capacidade de cada variável string;
 x informe o espaço usado pelo conteúdo em cada string;
 X Concatenar as duas strings. Antes de concatenar 
 verifique se a string de destino tem espaço suficiente para a concatenação, 
 caso o espaço não seja suficiente, escreva uma mensagem de erro.
*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];  
    
    printf("Digite uma string:");
    fgets(str1, sizeof(str1), stdin); 
    printf("Digite outra string:");
    fflush(stdin);
    fgets(str2, sizeof(str2), stdin); 
      
    //manipulando os dados da string
    str1[strcspn(str1, "\n")] = '\0'; //limpar o "enter"
    str2[strcspn(str2, "\n")] = '\0'; //limpar o "enter"
        
    int capacidadeDaVar1 = sizeof(str1);
    int capacidadeDaVar2 = sizeof(str2);
    
    int tamanhoDaStr1 = strlen(str1);
    int tamanhoDaStr2 = strlen(str2);
    
    printf("--------------------------------------------------------------\n");
    if (strcmp(str1, str2) == 0){
        printf("As strings são iguais\n");
    } else {
        printf("As string são diferentes\n");
    }
    
    printf("Str1: '%s',\nTendo uma capacidade de: %d e um tamanho de: %d\n", str1, capacidadeDaVar1, tamanhoDaStr1);
    printf("--------------------------------------------------------------\n");    
    printf("Str2: '%s',\nTendo uma capacidade de: %d e um tamanho de: %d\n", str2, capacidadeDaVar2, tamanhoDaStr2);
    printf("--------------------------------------------------------------\n");    
    strcat(str1, str2);
    
    if ( capacidadeDaVar1+capacidadeDaVar2 <= tamanhoDaStr1){
        strcat(str1, str2);
        printf("Strings concatenadas: '%s'", str1);
    }else{
        printf("String de destino não tem espaço suficiente para a concatenação!!");
    }
    
    return 0;
}

