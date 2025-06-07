#include <stdio.h>

    int main(){

        int nota;

        printf("VERIFICADOR DE NOTAS \n");    
        printf("Digite sua nota (número inteiro de 0 a 10): ");
        scanf("%d", &nota);

        if(nota >= 6){
            printf("Parabéns! Você é um GÊNIO! \n");
        } else{
           printf("SEU ASNO! Rodou bonito hein!? \n");
        }
          
        printf(" \n");
        printf(" \n");
    
    return 0;

    }
