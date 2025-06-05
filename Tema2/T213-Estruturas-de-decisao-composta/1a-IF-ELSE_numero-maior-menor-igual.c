#include <stdio.h>

        /*
        if (condicao) {
            //bloco de codigo a ser executado se condição for verdadeira
        }else {
            //bloco de codigo a ser executado se condição for falsa
        }
    }
            
    */
   int main(){
    
        int numero1;
        int numero2;
    printf("VERIFICAR QUAL DE DOIS NÚMEROS É MAIOR \n");    

    printf("Digite o primeiro Número:");
    scanf("%d", &numero1);

    printf("Digite o segundo Número:");
    scanf("%d", &numero2);

        if (numero1 >= numero2) {
            printf("Número 1 é maior ou igual ao Número 2 \n");
        }else {
            printf("Número 1 é menor que Número 2 \n");
        }

        printf(" \n");
        printf(" \n");
   
    return 0;
    }   