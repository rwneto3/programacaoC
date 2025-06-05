#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define AGUA 0
#define NAVIO 3

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    
    // Inicializa o tabuleiro com água
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    int linha_h, coluna_h;

    // Entrada separada para navio horizontal
    printf("NAVIO HORIZONTAL (tamanho 3)\n");
    printf("Digite a linha inicial (0 a 9): ");
    scanf("%d", &linha_h);
    printf("Digite a coluna inicial (0 a 7): ");
    scanf("%d", &coluna_h);

    // Validação de limites para navio horizontal
    if (linha_h < 0 || linha_h >= TAMANHO_TABULEIRO || coluna_h < 0 || coluna_h + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        printf("Erro: coordenadas inválidas para o navio horizontal.\n");
        return 1;
    }

    // Posiciona navio horizontal
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_h][coluna_h + i] = NAVIO;
    }

    int linha_v, coluna_v;

    // Entrada separada para navio vertical
    printf("\nNAVIO VERTICAL (tamanho 3)\n");
    printf("Digite a linha inicial (0 a 7): ");
    scanf("%d", &linha_v);
    printf("Digite a coluna inicial (0 a 9): ");
    scanf("%d", &coluna_v);

    // Validação de limites para navio vertical
    if (linha_v < 0 || linha_v + TAMANHO_NAVIO > TAMANHO_TABULEIRO || coluna_v < 0 || coluna_v >= TAMANHO_TABULEIRO) {
        printf("Erro: coordenadas inválidas para o navio vertical.\n");
        return 1;
    }

    // Verifica sobreposição
    int sobreposicao = 0;
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linha_v + i][coluna_v] != AGUA) {
            sobreposicao = 1;
            break;
        }
    }

    if (sobreposicao) {
        printf("Erro: o navio vertical sobrepõe outro navio.\n");
        return 1;
    }

    // Posiciona navio vertical
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_v + i][coluna_v] = NAVIO;
    }

    // Exibe o tabuleiro
    printf("\nTABULEIRO BATALHA NAVAL (0 = Água, 3 = Navio):\n\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

