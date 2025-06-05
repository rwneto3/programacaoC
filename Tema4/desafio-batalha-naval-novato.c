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
    printf("Digite as coordenadas (linha coluna) para o início do navio horizontal (tamanho 3): ");
    scanf("%d %d", &linha_h, &coluna_h);

    // Validação de limites para o navio horizontal
    if (linha_h < 0 || linha_h >= TAMANHO_TABULEIRO || coluna_h < 0 || coluna_h + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        printf("Erro: coordenadas inválidas para o navio horizontal.\n");
        return 1;
    }

    // Posiciona o navio horizontal
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_h][coluna_h + i] = NAVIO;
    }

    int linha_v, coluna_v;
    printf("Digite as coordenadas (linha coluna) para o início do navio vertical (tamanho 3): ");
    scanf("%d %d", &linha_v, &coluna_v);

    // Validação de limites para o navio vertical
    if (linha_v < 0 || linha_v + TAMANHO_NAVIO > TAMANHO_TABULEIRO || coluna_v < 0 || coluna_v >= TAMANHO_TABULEIRO) {
        printf("Erro: coordenadas inválidas para o navio vertical.\n");
        return 1;
    }

    // Verifica sobreposição antes de posicionar
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

    // Posiciona o navio vertical
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_v + i][coluna_v] = NAVIO;
    }

    // Exibe o tabuleiro
    printf("\nTabuleiro Batalha Naval (0 = Água, 3 = Navio):\n\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
