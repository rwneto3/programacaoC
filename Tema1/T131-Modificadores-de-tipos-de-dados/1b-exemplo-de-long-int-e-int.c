#include <stdio.h>
 
int main() {
    int regularNumber = 2147483647; // Valor máximo de int
    long int bigNumber = 2147483647;
 
    printf("Número regular (int): %d\n", regularNumber);
    printf("Número grande (long int): %ld\n", bigNumber);
 
    bigNumber = 2147483648; // Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", bigNumber); // variável long int (%ld)
    printf(" \n");
 /*
 long int pode ser usado para variável inteira 'int' ou variável "char'
 */
 
    return 0;
}