#include <stdio.h>
 
int main() {
    double preciseNumber = 3.141592653589793;
    long double veryPreciseNumber = 3.141592653589793238463;
 
    printf("Número preciso (double): %.15f\n", preciseNumber);
    printf("Número muito preciso (long double): %.21Lf\n", veryPreciseNumber);
    printf(" \n");
 
    return 0;
}