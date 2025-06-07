#include <stdio.h>

    int main(){

        /*
        Se a 'idade' for 1 anos ou mais, o programa imprime 'Você é maior de idade'.
        No nosso exemplo, 02 é maior do que 18, então a mensagem será exibida
        */

        int idade = 17;

        if(idade >= 18){
            printf("Você é maior de idade \n");
            printf("DENTRO DO IF \n");
        }

           printf("FORA DO IF \n");
    }
