#include <stdio.h>

int main()
{
    float nota, notas = 0, media, peso;
    
    int divisorMedia = 0;
    
    printf("Calcular media de 4 notas : \n ");
    for(int c = 1; c <= 4; c++){
        
        printf("Digite a nota %d: ", c);
        scanf("%f", &nota);
        printf("Digite o peso para a nota %d: ", c);
        scanf("%f", &peso);
    
        
        notas += peso*nota;

        divisorMedia +=peso;
        
    }
    
    media = notas/divisorMedia;
    
    printf("Sua media de notas é: %.2f", media);
    
    return 0;
}