#include <stdio.h>
#include <string.h>

int main()
{
    char name[15];
    int age; 
    
    printf("Digite o nome:");
    fgets(name, sizeof(name), stdin); 
    printf("Digite sua idade: ")/
    scanf("%d",&age);
      
    //manipulando os dados da string
    name[strcspn(name, "\n")] = '\0'; //limpar o "enter"

    if (age >= 0){
        if (age > 18){
            printf("%s é maior de idade", name);
        } else {
            printf("%s é menor de idade", name);
        }
    }else{
        printf("Idade invalida!");
    }
    return 0;
}

