#include <stdio.h>

int main()
{
    float nota, notas = 0, media;
    
    int divisorMedia = 0;
    
    printf("Calcular media de 4 notas:\n");
    for(int c = 1; c <= 4; c++){  
        printf("Digite a nota %d (peso %d):\n", c,c);
        scanf("%f", &nota);  
        notas += c*nota;
        divisorMedia +=c;    
    }
    
    media = notas/divisorMedia;
    
    printf("Sua media de notas é: %.2f\n", media);
    
    if (media >= 7){
       printf("Voce foi aprovado");
    }else{
       printf("Voce foi reprovado");
    }
    return 0;
}
