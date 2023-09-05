#include <stdio.h>

int main()
{
    float nota, notas, media;
    
    printf("Calcular media de 3 notas:\n");
    
    for(int c = 1; c <= 3; c++){
        
        printf("Digite a nota %d: ", c);
        scanf("%f", &nota);
    
        notas += nota;
        
    }
    
    media = notas/3;
    
    printf("Sua media de notas é: %.2f", media);
    
    return 0;
}
