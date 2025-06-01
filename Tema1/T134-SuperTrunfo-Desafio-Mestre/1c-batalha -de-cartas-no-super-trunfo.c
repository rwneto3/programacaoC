#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[20];          // Letra do estado (A-H)
    char codigo1[3];           // Código da carta (ex: A01)
    char nomeCidade1[50];      // Nome da cidade 
    unsigned long int populacao1; // Número de habitantes (modificado para unsigned long int)
    float area1;               // Área da cidade em km²
    float pib1;                // PIB da cidade em bilhões        
    int pontosTuristicos1;     // Número de pontos turísticos
    float densPop1;            // Densidade Populacional
    float mediaPIB1;           // PIB per Capita
    float superPoder1;         // Super Poder da Carta 1

    // Variáveis da Carta 2
    char estado2[20];          // Letra do estado (A-H)
    char codigo2[3];           // Código da carta (ex: B02)      
    char nomeCidade2[50];      // Nome da cidade 
    unsigned long int populacao2; // Número de habitantes (modificado para unsigned long int)
    float area2;               // Área da cidade em km²
    float pib2;                // PIB da cidade em bilhões
    int pontosTuristicos2;     // Número de pontos turísticos
    float densPop2;            // Densidade Populacional
    float mediaPIB2;           // PIB per Capita
    float superPoder2;         // Super Poder da Carta 2

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %s", estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade1);

    printf("Digite a população da cidade: ");
    scanf(" %lu", &populacao1);

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
    scanf(" %lu", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculo das Densidades Populacionais de cada carta
    densPop1 = populacao1 / area1;
    densPop2 = populacao2 / area2;

    // Cálculo do PIB per Capita (PIB em bilhões, multiplicado por 1.000.000.000 para converter para unidades)
    mediaPIB1 = (pib1 * 1000000000) / populacao1;
    mediaPIB2 = (pib2 * 1000000000) / populacao2;

    // Cálculo do Super Poder para cada carta
    // Inclui todos os atributos numéricos + inverso da densidade populacional
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + mediaPIB1 + (1/densPop1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + mediaPIB2 + (1/densPop2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab por km²\n", densPop1);
    printf("PIB per Capita: %.2f reais por habitante\n", mediaPIB1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab por km²\n", densPop2);
    printf("PIB per Capita: %.2f reais por habitante\n", mediaPIB2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    
    // População (maior vence)
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    
    // Área (maior vence)
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    
    // PIB (maior vence)
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    
    // Pontos Turísticos (maior vence)
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, (pontosTuristicos1 > pontosTuristicos2));
    
    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densPop1 < densPop2) ? 1 : 2, (densPop1 < densPop2));
    
    // PIB per Capita (maior vence)
    printf("PIB per Capita: Carta %d venceu (%d)\n", (mediaPIB1 > mediaPIB2) ? 1 : 2, (mediaPIB1 > mediaPIB2));
    
    // Super Poder (maior vence)
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2));

    return 0;
}
