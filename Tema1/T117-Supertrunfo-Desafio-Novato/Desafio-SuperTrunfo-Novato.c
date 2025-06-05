
/*Desafio Cartas Super Trunfo - Novato*/
/*Cadastro das Cartas*/
#include <stdio.h>

int main() {
    // Declaração de variáveis da Carta 1
    unsigned char siglaEstado1[10]; // Letra do estado (A-H)
    char codigo1[3];       // Código da carta (ex: A01)
    char nomeCidade1[50];  // Nome da cidade 
    int populacao1;        // Número de habitantes
    float area1;           // Área da cidade em km²
    float pib1;            // PIB da cidade em bilhões        
    int pontosTuristicos1; // Número de pontos turísticos


    // Declaração de variáveis da Carta 2
    char estado2[10];      // Letra do estado (A-H)
    char codigo2[3];       // Código da carta (ex: B02)      
    char nomeCidade2[50];  // Nome da cidade 
    int populacao2;        // Número de habitantes
    float area2;           // Área da cidade em km²
    float pib2;            // PIB da cidade em bilhões
    int pontosTuristicos2; // Número de pontos turísticos
 

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Digite a sigla do Estado (ex. SP): ");
    scanf(" %u", siglaEstado1);

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
    scanf(" %c", &estado2);

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

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %d\n", siglaEstado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

     // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
