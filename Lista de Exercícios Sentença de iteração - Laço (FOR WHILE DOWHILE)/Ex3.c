/******************************************************************************
3 - Escreva um programa que imprima na tela os números múltiplos de 3  entre 1 e 20 de forma crescente. use o comando WHILE.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num = 1;
    while (num <= 20){
        if (num % 3 == 0) printf(" O número %d é multipo de 3 \n",num);
        num++;
    }

    return 0;
}
