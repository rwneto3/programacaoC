#include <stdio.h>
 
int main() {
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // resultado de 'a / b' é explicitamente convertido para float (casting)
 
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("QUOCIENTE (a / b): %.2f\n", quociente);
    printf(" \n");

    return 0;
}


   