/******************************************************************************
5 - Imprimir a letra da musica abaixo, utilizar laço para imprimir. Ler do usuário o número máximo de elefantes

1 elefante se balançava, numa teia de aranha
Mas como a teia não se arrebentou,
Foi chamar outro elefante.

2 elefantes se balançavam, numa teia de aranha
Mas como a teia não se arrebentou,
Foram chamar outro elefante.

3 elefantes se balançavam, numa teia de aranha
Mas como a teia não se arrebentou,
Foram chamar outro elefante.
...

30 elefantes se balançavam, numa teia de aranha
Mas como a teia não se arrebentou,
Todos foram para o chão!
*******************************************************************************/
#include <stdio.h>

int main()
{
    int elefantes, c; 

    printf("Digite o número de elefantes: ");
    scanf("%d", &elefantes);

    printf("1 elefante se balançava, numa teia de aranha\n");
    printf("Mas como a teia não se arrebentou,\n");
    (elefantes != 1) ? printf("Foi chamar outro elefantes.\n") : printf("Todos foram para o chão!\n") ;
    
    for (c = 2; c <= elefantes; c++) {
        printf("%d elefantes se balançavam, numa teia de aranha\n", c);
        printf("Mas como a teia não se arrebentou,\n");
        if (c < elefantes) {
            printf("Foram chamar outro elefante.\n");
        } else {
            printf("Todos foram para o chão!\n");
        }
    }

    return 0;
}


