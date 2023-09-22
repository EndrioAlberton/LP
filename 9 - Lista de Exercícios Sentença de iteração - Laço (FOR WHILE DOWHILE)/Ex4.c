/******************************************************************************
4 - Escreva um programa que imprima na tela os números múltiplos de 3  entre 1 e 20 de forma decrescente. use o comando DO WHILE.
*******************************************************************************/
#include <stdio.h>

int main()
{
	int num = 20;
		do{
            if (num % 3 == 0) printf(" O número %d é multipo de 3 \n",num);
			num--;
		} while(num >= 1);
    return 0;
}

