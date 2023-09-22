/******************************************************************************
 1 - Escreva um programa  que imprima na tela os números pares entre 1 e 20 de forma crescente. use o comando FOR.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    for (num = 1; num <= 20; num++){
        if (num % 2 == 0) printf(" O número %d é par \n",num);
    }

    return 0;
}
