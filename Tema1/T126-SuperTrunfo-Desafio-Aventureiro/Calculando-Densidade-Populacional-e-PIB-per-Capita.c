
/*Desafio Cartas Super Trunfo - Aventureiro*/
/*Calculando Densidade Populacional e PIB per Capita*/
#include <stdio.h>

int main() {

    // Variáveis da Carta 1
    char estado1[20];      // Letra do estado (A-H)
    char codigo1[3];       // Código da carta (ex: A01)
    char nomeCidade1[50];  // Nome da cidade 
    int populacao1;        // Número de habitantes
    float area1;           // Área da cidade em km²
    float pib1;            // PIB da cidade em bilhões        
    int pontosTuristicos1; // Número de pontos turísticos
    float densPop1;        // Densidade Populacional
    float mediaPIB1;       // PIB per Capita
    
    // Variáveis da Carta 2
    char estado2[20];      // Letra do estado (A-H)
    char codigo2[3];       // Código da carta (ex: B02)      
    char nomeCidade2[50];  // Nome da cidade 
    int populacao2;        // Número de habitantes
    float area2;           // Área da cidade em km²
    float pib2;            // PIB da cidade em bilhões
    int pontosTuristicos2; // Número de pontos turísticos
    float densPop2;        // Densidade Populacional
    float mediaPIB2;       // PIB per Capita

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Digite a letra do Estado (A-H): ");
    scanf(" %s", estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade1);

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);
    

    // Leitura dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Digite a letra do Estado (A-H): ");
    scanf(" %s", estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade2);

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    //Cálculo das Densidades Populacionais de cada carta

    densPop1 =  populacao1 / area1;
    densPop2 =  populacao2 / area2;
  
    //Cálculo das Densidades Populacionais de cada Carta, multiplicando os valores dos PIBs por (1.000.000.000)

    mediaPIB1 = (pib1 * 1000000000) / populacao1;
    mediaPIB2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab por km²\n", densPop1);
    printf("PIB per Capita: %,2f de reais por habitante\n", mediaPIB1);

     // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab por km²\n", densPop2);
    printf("PIB per Capita: %.2f de reais por habitante\n", mediaPIB2);
    printf(" \n");


    return 0;
}
