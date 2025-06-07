#include <stdio.h>

    int main(){
        int numero;
        int resultado;

        printf("VERIFICA SE UM NÚMERO DE 0 A 99 É PAR OU ÍMPAR \n");    
        printf("Digite um Número Inteiro (0 a 99): ");
        scanf("%d", &numero);

        resultado = numero % 2;

        if (resultado == 0) {
            printf("O número é par \n");
        } else {
            printf("O número é ímpar \n");
        }
       printf(" \n");
       printf(" \n");
       
    return 0;
    }
