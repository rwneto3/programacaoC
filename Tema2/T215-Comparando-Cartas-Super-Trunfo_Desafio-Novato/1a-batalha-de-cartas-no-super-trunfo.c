
/*Desafio Cartas Super Trunfo - Novato*/
/*Calculando Densidade Populacional e PIB per Capita*/
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
    float densPopA;        // Densidade Populacional
    float mediaPIB1;       // PIB per Capita
    
    
    // Declaração das variáveis da Carta 2
    char estadoB[4];        //Sigla do Estado 2
    char codigoB[4];        // Código da Carta 2 ex: "A01"
    char nomeCidadeB[50];   //Nome da Cidade 2
    float populacaoB;       //Popuplação da Cidade 2
    float areaB;            //Área da Cidade 2 em km2
    float pibB;             //PIB da Cidade 2
    int pontosTuristicosB;  //Número de Pontos Turísticos Cidade 2
    float densPopB;        // Densidade Populacional
    float mediaPIB2;       // PIB per Capita



    // Entrada de dados para a Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (ex. SP): ");
    scanf("%s", estadoA);
    
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoA);

    printf("Nome da Cidade (ex. São_Paulo): ");
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

    printf("Nome da Cidade (ex. Rio_de_Janeiro) ");
    scanf("%s", nomeCidadeB);

    printf("População: ");
    scanf("%f", &populacaoB);

    printf("Área (em km2): ");
    scanf("%f", &areaB);

    printf("PIB (em bilhões de Reais): ");
    scanf("%f", &pibB);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosB);

    //Cálculo das Densidades Populacionais de cada carta

    densPop1 =  populacao1 / area1;
    densPop2 =  populacao2 / area2;
  
    //Cálculo das Densidades Populacionais de cada Carta, multiplicando os valores dos PIBs por (1.000.000.000)

    mediaPIB1 = (pib1 * 1000000000) / populacao1;
    mediaPIB2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados da Carta 1
    printf(" \n");
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ \n");
    printf("CARTA 1: \n");
    printf("Estado: %s\n", estado1);
    //printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    //printf("População: %d\n", populacao1);
    //printf("Área: %.2f km²\n", area1);
    //printf("PIB: %.2f bilhões de reais\n", pib1);
    //printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densPop1);
    printf("PIB per Capita: R$ %.2f /hab\n", mediaPIB1);

    // Exibição dos dados da Carta 2
    
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ \n");
    printf("CARTA 2: \n");
    printf("Estado: %s\n", estado2);
    //printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    //printf("População: %d\n", populacao2);
    //printf("Área: %.2f km²\n", area2);
    //printf("PIB: %.2f bilhões de reais\n", pib2);
    //printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitants/km²\n", densPop2);
    printf("PIB per Capita: R$ %.2f /hab\n", mediaPIB2);
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ \n");
    printf(" \n");
    

    // Comparação do Atributo POPULAÇÃO

    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ \n");
    printf("COMPARAÇÃO DE CARTAS (ATRIBUTO: População): \n");
    printf("Carta 1 - %s (%s): %d \n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d \n", nomeCidade2, estado2, populacao2);

    /*
    if(populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!: \n", nomeCidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!: \n", nomeCidade2);
    }
    */

    if(populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu! População: %d\n", nomeCidade1, populacao1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu! População: %d\n", nomeCidade2, populacao2);
    }


    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ \n");
    printf(" \n");
    printf(" \n");
    

    return 0;
}
