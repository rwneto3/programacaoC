#include <stdio.h>
    int main(){

        int idade;

        printf("VERIFICADOR DE MAIORIDADE \n");    
        printf("Digite sua idade (número inteiro): ");
        scanf("%d", &idade);    

        if(idade >= 18) {
            printf("Você é maior de idade \n");
        } else {
            printf("Você é menor de idade \n");
        }

        printf(" \n");
        printf(" \n");


    return 0;    
    }

