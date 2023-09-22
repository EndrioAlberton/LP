/******************************************************************************
2 - Escreva um programa que imprima na tela os números impares  entre 1 e 20 de forma decrescente. use o comando FOR.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    for (num = 20; num >= 1; num--){
        if (num % 2 != 0) printf(" O número %d é impar \n",num);
    }

    return 0;
}
