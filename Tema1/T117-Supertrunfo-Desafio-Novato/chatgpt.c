#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estadoA[4];
    char codigoA[4];         // Ex: "A01" + '\0'
    char nomeCidadeA[50];
    int populacaoA;
    float areaA;
    float pibA;
    int pontosTuristicosA;

    /*
    // Declaração das variáveis da Carta 2
    char estadoB[4];
    char codigoB[4];
    char nomeCidadeB[50];
    int populacaoB;
    float areaB;
    float pibB;
    int pontosTuristicosB;
*/


    // Entrada de dados para a Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estadoA);  // espaço antes do %c evita capturar enter anterior

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoA);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidadeA);  // lê até a quebra de linha

    printf("População: ");
    scanf("%d", &populacaoA);

    printf("Área (em km²): ");
    scanf("%f", &areaA);

    printf("PIB (em bilhões): ");
    scanf("%f", &pibA);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosA);

    /*
    // Entrada de dados para a Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estadoB);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigoB);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidadeB);

    printf("População: ");
    scanf("%d", &populacaoB);

    printf("Área (em km²): ");
    scanf("%f", &areaB);

    printf("PIB (em bilhões): ");
    scanf("%f", &pibB);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosB);
*/

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estadoA);
    printf("Código: %s\n", codigoA);
    printf("Nome da Cidade: %s\n", nomeCidadeA);
    printf("População: %d\n", populacaoA);
    printf("Área: %.2f km²\n", areaA);
    printf("PIB: %.2f bilhões de reais\n", pibA);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosA);

   /* // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoB);
    printf("Código: %s\n", codigoB);
    printf("Nome da Cidade: %s\n", nomeCidadeB);
    printf("População: %d\n", populacaoB);
    printf("Área: %.2f km²\n", areaB);
    printf("PIB: %.2f bilhões de reais\n", pibB);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosB);
*/
    return 0;
}