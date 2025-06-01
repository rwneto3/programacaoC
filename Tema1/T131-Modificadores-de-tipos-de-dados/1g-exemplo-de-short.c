#include <stdio.h>
 
int main() {
    short int numeroPequeno = 32767; // valor máximo de SHORT INT
    printf("Número pequeno (SHORT INT): %d\n", numeroPequeno);

    numeroPequeno = 32768; //valor maior que o máximo de SHORT INT
    printf("Número pequeno atualizado (SHORT INT): %d", numeroPequeno);

    printf(" \n");
 
    printf("\n*** Tamanho das variáveis ***\n");
    printf("SHORT INT: %lu B - INT: %lu B - LONG LONG INT: %lu B\n", sizeof(short), sizeof(int), sizeof(long long int));
    printf("FLOAT INT: %lu B - DOUBLE: %lu B - LONG DOUBLET: %lu B\n", sizeof(float), sizeof(double), sizeof(long double));
    
    return 0;
}