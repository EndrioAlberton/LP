#include <stdio.h>

int main() {
    int num1;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    if (num1 % 2 == 0 && num1 > 0 ) {
        printf("O número é %d par e positivo", num1);
    } else if (num1 % 2 == 0 && num1 < 0)  {
        printf("O número é %d par e negativo", num1);
    } else if ((num1 % 2 != 0) && num1 > 0)  {
        printf("O número é %d impar e positivo", num1);
    }else if (num1 % 2 != 0 && num1 < 0)  {
        printf("O número é %d impar e negativo", num1);
    }

    return 0;
}

