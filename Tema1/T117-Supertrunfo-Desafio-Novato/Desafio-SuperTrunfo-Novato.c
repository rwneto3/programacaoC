/*
Desafio Super Trunfo Novatos - Cadastro das Cartas
*/
#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estadoA[4];        //Sigla do Estado 1
    char codigoA[4];        // Código da Carta 1 ex: "A01"
    char nomeCidadeA[50];   //Nome da Cidade 1
    float populacaoA;       //Popuplação da Cidade 1
    float areaA;            //Área da Cidade 1 em km2
    float pibA;             //PIB da Cidade 1
    int pontosTuristicosA;  //Número de Pontos Turísticos Cidade 1
    
    
    // Declaração das variáveis da Carta 2
    char estadoB[4];        //Sigla do Estado 2
    char codigoB[4];        // Código da Carta 2 ex: "A01"
    char nomeCidadeB[50];   //Nome da Cidade 2
    float populacaoB;       //Popuplação da Cidade 2
    float areaB;            //Área da Cidade 2 em km2
    float pibB;             //PIB da Cidade 2
    int pontosTuristicosB;  //Número de Pontos Turísticos Cidade 2



    // Entrada de dados para a Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (ex. SP): ");
    scanf("%s", estadoA);
    
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoA);

    printf("Nome da Cidade (e. São_Paulo): ");
    scanf("%s", nomeCidadeA);

    printf("População: ");
    scanf("%f", &populacaoA);

    printf("Área (em km2): ");
    scanf("%f", &areaA);

    printf("PIB (em bilhões de Reais): ");
    scanf("%f", &pibA);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosA);

   
    // Entrada de dados para a Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (ex. RJ): ");
    scanf("%s", estadoB);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigoB);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidadeB);

    printf("População: ");
    scanf("%f", &populacaoB);

    printf("Área (em km2): ");
    scanf("%f", &areaB);

    printf("PIB (em bilhões de Reais): ");
    scanf("%f", &pibB);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosB);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estadoA);
    printf("Código: %s\n", codigoA);
    printf("Nome da Cidade: %s\n", nomeCidadeA);
    printf("População: %f\n", populacaoA);
    printf("Área: %.2f km2\n", areaA);
    printf("PIB: R$ %.2f bilhões de Reais\n", pibA);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosA);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estadoB);
    printf("Código: %s\n", codigoB);
    printf("Nome da Cidade: %s\n", nomeCidadeB);
    printf("População: %f\n", populacaoB);
    printf("Área: %.2f km2\n", areaB);
    printf("PIB: R$ %.2f bilhões\n", pibB);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosB);
    
    printf(" \n");

    return 0;
}
