#include <stdio.h>

    int main(){

        int numero = 9, resultado;

        resultado = numero % 2;
        printf("Verificar se o número %d é par... \n", numero);
        printf("A variável Resultado (%d dividido por 2) tem resto: %d \n", numero, resultado);

        if(resultado == 0){
            printf("A variável Resultado tem resto O (ZERO), então o numero %d é par \n", numero);
        }
        
        if(numero % 2 != 0){
            printf("A variável Resultado tem resto 1 (UM), então o numero %d é ímpar \n", numero);
        }
          
    
    
    return 0;

    }
