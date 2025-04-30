#include <stdio.h>

int main() {
    // Movimento da TORRE: 5 casas para a direita, usando 'for'
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do BISPO: 5 casas na diagonal superior direita, usando 'while'
    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // Movimento da RAINHA: 8 casas para a esquerda, usando 'do-while'
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}
