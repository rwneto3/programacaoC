#include <stdio.h>

int main() {
    // Número de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre (usando 'for'):\n");
    // A torre se move em linha reta. Aqui ela irá se mover 5 casas para a direita.
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo (usando 'while'):\n");
    // O bispo se move na diagonal. Aqui ele irá se mover 5 casas para cima e à direita.
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\nMovimento da Rainha (usando 'do-while'):\n");
    // A rainha pode se mover em qualquer direção. Aqui ela irá se mover 8 casas para a esquerda.
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}
