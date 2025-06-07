#include <stdio.h>

int main() {
    float numero1 = 10.2;
    int numero2 = 10;

    printf("numero 1 > numero 2: %d\n", numero1 > numero2);
    printf("numero 1 == numero 2: %d\n", numero1 == numero2);
    
    printf("(casting) numero 1 > numero 2: %d\n", (int)numero1 > numero2);
    printf("(casting) numero 1 == numero 2: %d\n", (int)numero1 == numero2);

    printf(" \n");
    

    return 0;
}