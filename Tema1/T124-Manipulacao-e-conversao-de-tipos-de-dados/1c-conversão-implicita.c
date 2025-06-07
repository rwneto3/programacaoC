#include <stdio.h>
 
int main() {
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // variável 'a' é convertido implicitamente para float
 
    printf("a: %d\n", a);
    printf("b: %.2f\n", b);
    printf("Resultado da SOma de de a + b: %.2f\n", resultado);
    printf(" \n");
 
    return 0;
}