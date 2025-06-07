#include <stdio.h>

int main(){

    /*
    Atribuição Simples (=)
    Atribuição com Soma (+=)
    Atribuição com Subtração (-=)
    Atribuição com Multiplicação (*=)
    Atribuição com Divisão (/=)
    */

    int numero1 = 10, numero2, resultado;

    resultado = 10;
    printf("Resultado: %d \n", resultado);
    
    //resultado = resultado + 20
    resultado += 20;
    printf("Resultado: %d \n", resultado);

    //resultado = resultado - numero1
    resultado -= numero1;
    printf("Resultado: %d \n", resultado);

    //resultado = resultado multiplicado por 5 
    resultado *= 5;
    printf("Resultado: %d \n", resultado);

    //resultado = resultado dividido por 2
    resultado /= 2;
    printf("Resultado: %d \n", resultado);


    /*
    scanf("%d", &numero1);
    printf("Entre com o número 2: \n");
    scanf("%d", &numero2);

    //operação SOMA
    soma = numero1 + numero2;

    //operação SUBTRAÇÃO    
    subtracao = numero1 - numero2;
    
    //operação MULTIPLICACAO
    multiplicacao = numero1 * numero2;
    
    //operação DIVISÃO
    divisao = numero1 / numero2;

    printf("A soma é: %d \n", soma);
    printf("A subtração é: %d \n", subtracao);
    printf("A multiplicação é: %d \n", multiplicacao);
    printf("A divisão é: %d \n", divisao);
*/

return 0;
}