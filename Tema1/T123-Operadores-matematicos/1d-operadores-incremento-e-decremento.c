#include <stdio.h>

int main(){

    /*
    Incremento (++)
    Pré-Incremento (++a)
    Pós-Incremento (a++)
    Decremento (--)
    Pré-Decremento (--a)
    Pós-Decremento (a--)
    Atribuição Simples (=)
    Atribuição com Soma (+=)
    Atribuição com Subtração (-=)
    Atribuição com Multiplicação (*=)
    Atribuição com Divisão (/=)
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int numero1 = 1;

    printf("Antes do Incremento: %d \n", numero1); 
    
    numero1++; // equivale à expressão ARITMÉTICA SOMA (numero1 = numero 1 + 1) ou de ATRIBUIÇÃO COM SOMA (numero1 += 1)
    printf("Após Incremento: %d \n", numero1); 

    numero1--; // equivale à expressão ARITMÉTICA SUBTRAÇÃO (numero1 = numero 1 - 1) ou de ATRIBUIÇÃO COM SUBTRAÇÃO (numero1 -= 1)
    printf("Após Decremento: %d \n", numero1);
    
    
    

return 0;
}