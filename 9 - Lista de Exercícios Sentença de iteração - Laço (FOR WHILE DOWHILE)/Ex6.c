/******************************************************************************

6 - Imprimir a letra da musica abaixo, utilizar laço para imprimir. Utilize laço para imprimir a palavra “incomodam”. Utilizar contador para contar quantas ocorrências da palavra incomoda e incomodam ocorrem na letra(somar a ocorrência das duas palavras). IMPRIMIR A QUANTIDADE DE OCORRÊNCIAS

Usar while e do-while. Não usar for.

1 elefante incomoda muita gente
2 elefantes incomodam, incomodam muito mais
3 elefantes incomodam muita gente
4 elefantes incomodam, incomodam, incomodam, incomodam muito mais
5 elefantes incomodam muita gente
6 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito mais
7 elefantes incomodam muita gente
8 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito mais
9 elefantes incomodam muita gente
10 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito mais
10 elefantes incomodam muita gente
9 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito menos
8 elefantes incomodam muita gente
7 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito menos
6 elefantes incomodam muita gente
5 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, muito menos
4 elefantes incomodam muita gente
3 elefantes incomodam, incomodam, incomodam muito menos
2 elefantes incomodam muita gente
1 elefante incomoda muito menos

*******************************************************************************/
#include <stdio.h>

int main()
{
    int c1, c2, cIncomodam;
    printf("%d elefante incomoda muita gente \n",c1+1);
    for (c1 = 2; c1 <=10; c1++){
        printf("%d elefantes",c1);
        for (cIncomodam = 1; cIncomodam <= c1-1; cIncomodam++) printf(" incomodam,");
        printf(" incomodam muita gente \n");        
    }
    for (c2 = 10; c2 >1; c2 --){
        printf("%d elefantes",c2);
        for (cIncomodam = 1; cIncomodam <= c2-1; cIncomodam++) printf(" incomodam,");
        printf(" incomodam muita gente \n");        
    }
    printf("%d elefante incomoda muita gente \n",c2);
    return 0;
}
