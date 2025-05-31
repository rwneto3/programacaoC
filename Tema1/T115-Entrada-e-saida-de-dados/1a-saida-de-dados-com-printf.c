#include <stdio.h>
int main() {
    int idade = 51;
    float altura = 1.77;
    char opcao = 'S';
    char nome[20] = "Rafael";
    
    printf("O nome é: %s\n", nome);
    printf("A idade de %s é: %d anos\n", nome, idade);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é: %c\n", opcao);

    /*
        printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)
       
        %d: Imprime um inteiro no formato decimal.
        %i: Equivalente a %d.
        %f: Imprime um número de ponto flutuante no formato padrão.         
            para definir o nr de casas decimais no %f, colocamos um ponto e o nr 
            entre o '%' e o 'f" (exemplo: %.2f --> 0.00)

        %e: Imprime um número de ponto flutuante na notação científica.
        %c: Imprime um único caractere.
        %s: Imprime uma cadeia (string) de caracteres.
        No 'printf', o "\n" serve para pular uma linha.
    */
    
    

return 0;
}