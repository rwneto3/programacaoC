
/*Desafio Cartas Super Trunfo - Novato*/
/*COMPARAÇÃO DE CARTAS*/
/*Atributo escolhido: POPULAÇÃO (direto no código)*/
/*Não foi mencionado na proposta do desafio, mas foram incluídas verificações */
/*Para evitar divisões por 0 (ZERO) nos cálculos de Densidade Populacional e de Renda Per Capita*/

#include <stdio.h>

int main() {

    // Variáveis da Carta 1
    char estado1[10];        // Sigla do estado (ex: SP)
    char codigo1[4];         // Código da carta (ex: A01)
    char nomeCidade1[50];    // Nome da cidade SEM espaços
    int populacao1;          // Número de habitantes
    float area1;             // Área da cidade em km2
    float pib1;              // PIB da cidade em bilhões        
    int pontosTuristicos1;   // Número de pontos turísticos
    float densPop1;          // Densidade Populacional
    float mediaPIB1;         // PIB per Capita

    // Variáveis da Carta 2
    char estado2[10];        // Sigla do estado (ex: RJ)
    char codigo2[4];         // Código da carta (ex: B02)
    char nomeCidade2[50];    // Nome da cidade SEM espaços
    int populacao2;          // Número de habitantes
    float area2;             // Área da cidade em km2
    float pib2;              // PIB da cidade em bilhões
    int pontosTuristicos2;   // Número de pontos turísticos
    float densPop2;          // Densidade Populacional
    float mediaPIB2;         // PIB per Capita

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Digite a sigla do Estado (ex: SP): ");
    scanf(" %s", estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade SEM ESPAÇOS (ex: SãoPaulo): ");
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

    printf("Digite a sigla do Estado (ex: RJ): ");
    scanf(" %s", estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade SEM ESPAÇOS (ex: RioDeJaneiro): ");
    scanf(" %s", nomeCidade2);

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculo da densidade populacional, com verificação para evitar divisão por zero
    if (area1 != 0)
        densPop1 = populacao1 / area1;
    else
        densPop1 = 0;

    if (area2 != 0)
        densPop2 = populacao2 / area2;
    else
        densPop2 = 0;

    // Cálculo do PIB per capita, com verificação para evitar divisão por zero
    if (populacao1 != 0)
        mediaPIB1 = (pib1 * 1000000000) / populacao1;
    else
        mediaPIB1 = 0;

    if (populacao2 != 0)
        mediaPIB2 = (pib2 * 1000000000) / populacao2;
    else
        mediaPIB2 = 0;

    // Exibição dos dados da Carta 1
    printf(" \n");
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ \n");
    printf("CARTA 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densPop1);
    printf("PIB per Capita: R$ %.2f /hab\n", mediaPIB1);

    // Exibição dos dados da Carta 2
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ \n");
    printf("CARTA 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densPop2);
    printf("PIB per Capita: R$ %.2f /hab\n", mediaPIB2);
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ \n");
    printf(" \n");

    // Comparação do atributo População
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ \n");
    printf("COMPARAÇÃO DE CARTAS (ATRIBUTO: População): \n");
    printf("Carta 1 - %s (%s): %d \n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d \n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu! População: %d\n", nomeCidade1, populacao1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu! População: %d\n", nomeCidade2, populacao2);
    }

    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ \n");
    printf(" \n");

    return 0;
}

