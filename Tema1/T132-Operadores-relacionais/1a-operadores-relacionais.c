#include <stdio.h>
/*
> (maior que)
< (menor que)
>= (maior ou igual a)
<= (menor ou igual a)
== (igual a)
!= (diferente de)
*/

int main() {
    int a = 20;
    int b = 20;

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <=b: %d\n", a <= b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    return 0;
}