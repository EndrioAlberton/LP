/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char op;
    float num1, num2;
    
    printf ("Digite a operação desejada (+,-,/ ou *): ");
    op = getchar();
    printf ("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf ("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    switch(op){
        case '+':
            printf ("Resultado = %.2f", num1+num2);
            break;
        case '-':
            printf ("Resultado = %.2f", num1-num2);
            break;
        case '/':
            printf ("Resultado = %.2f", num1/num2);
            break;
        case '*':
            printf ("Resultado = %.2f", num1*num2);
            break;
        default:
		printf ("Opção Inválida");
    }
    
    return 0;
}


