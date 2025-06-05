#include <stdio.h>

    int main(){

        int estoque;

        printf("VERIFICA NÍVEL DO ESTOQUE \n");    
        printf("Digite o valor do Estoque: ");
        scanf("%d", &estoque);

        if (estoque >= 5) {
            printf("Estoque OK! \n");
        } else{
            printf("Estoque baixo \n");
        }
        printf(" \n");
        printf(" \n");
          
    
    return 0;

    }
