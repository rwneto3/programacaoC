#include <stdio.h>

int main(){

    /*
    Incremento (++)
    Pré-Incremento (++a)
    Pós-Incremento (a++)
    Decremento (--)
    Pré-Decremento (--a)
    Pós-Decremento (a--)
    */

    int numero1 = 1, resultado = 0;

    printf("ANTES DO INCREMENTO - Número 1 é igual a: %d - Resultado é igual a: %d\n", numero1, resultado);
    
    resultado = numero1++; // Pós-incremento equivale à operação de atribuição (resultado = numero1) seguida da operação INCREMENTO (numero1++)
    printf("APÓS O PÓS-INCREMENTEO - Número 1 é igual a: %d - Resultado é igual a: %d\n", numero1, resultado); 

    resultado = ++numero1; // Pré-incremento equivale à expressão operação INCREMENTO (numero1++) seguida da operação de atribuição (resultado = numero1)
    printf("APÓS O PRÉ-INCREMENTO - Número 1 é igual a: %d - Resultado é igual a: %d\n", numero1, resultado);

    resultado = numero1--; // Pós-decremento equivale à operação de atribuição (resultado = numero1) seguida da operação DECREMENTO (numero1--)
    printf("APÓS O PÓS-DECREMENTO - Número 1 é igual a: %d - Resultado é igual a: %d\n", numero1, resultado);

    resultado = --numero1; // Pré-decremento equivale à expressão operação DECRMENTO (--numero1) seguida da operação de atribuição (resultado = numero1)
    printf("APÓS O PRÉ-DECREMENTO - Número 1 é igual a: %d - Resultado é igual a: %d\n", numero1, resultado);

    printf(" \n"); 

    //numero1--; // equivale à expressão ARITMÉTICA SUBTRAÇÃO (numero1 = numero 1 - 1) ou de ATRIBUIÇÃO COM SUBTRAÇÃO (numero1 -= 1)
    //printf("Após Decremento: %d \n", numero1);
    
    
    

return 0;
}