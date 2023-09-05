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
            
    printf("Sua media de notas é: %.2f\n", media);
            
    if (media >= 7){
       printf("Voce foi aprovado");
    }else{
          printf("Voce foi reprovado");
    }
    return 0;
}
