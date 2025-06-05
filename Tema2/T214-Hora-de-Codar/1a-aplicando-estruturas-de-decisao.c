#include <stdio.h>

    int main(){

        float temperatura, umidade;
        unsigned int estoque, estoqueMinimo =1000;

        printf("DIGITE A TEMPERATURA \n");    
        scanf("%f", &temperatura);

        printf("DIGITE A UMIDADE \n");    
        scanf("%f", &umidade);

        printf("DIGITE O NÍVEL DO ESTOQUE \n");
        scanf("%u", &estoque);

        if (temperatura > 30) {
            printf("Temperatura está ALTA! \n");
        } else{
            printf("Temperatura está dentro dos parâmetros. \n");
        }
        
        if (umidade > 50) {
            printf("Umidade ELEVADA! \n");
        } else{
            printf("Umidade está dentro dos parâmetros. \n");
        }
        
        if (estoque < estoqueMinimo) {
            printf("Estoque ABAIXO DO MÍNIMO! \n");
        } else{
            printf("Estoque NORMAL. \n");
        }
        printf(" \n");
        printf(" \n");
          
    
    return 0;
    }