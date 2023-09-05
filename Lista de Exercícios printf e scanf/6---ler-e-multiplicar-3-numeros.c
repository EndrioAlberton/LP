#include <stdio.h>

int main()
{
    
    float num, total = 0;
    for(int c = 1; c <= 3; c++){
        printf("Digite o número %d: \n", c);
        scanf("%f", &num);
        total += num;
        
    }
    printf("O total da multiplicação deu: %.2f", total);
}
