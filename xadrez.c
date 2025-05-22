#include <stdio.h>

// -------------------------------
// Função recursiva para movimentar a Torre
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;  // Condição de parada
    printf("Direita\n");
    moverTorre(casasRestantes - 1);  // Chamada recursiva
}

// -------------------------------
// Função recursiva para movimentar o Bispo
void moverBispo(int casasRestantes) {
    if (casasRestantes == 0) return;  // Condição de parada
    printf("Cima Direita\n");
    moverBispo(casasRestantes - 1);
}

// -------------------------------
// Função recursiva para movimentar a Rainha
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;  // Condição de parada
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// -------------------------------
// Movimento do Bispo também com loops aninhados
void moverBispoComLoops(int casasVerticais, int casasHorizontais) {
    printf("\nMovimento adicional do Bispo com loops aninhados:\n");
    for (int i = 1; i <= casasVerticais; i++) { // Loop externo: movimento vertical
        for (int j = 1; j <= casasHorizontais; j++) { // Loop interno: movimento horizontal
            printf("Cima Direita\n");
        }
    }
}

// -------------------------------
// Movimento complexo do Cavalo: "L" para cima e direita
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    int direcaoVertical = 2;  // 2 casas para cima
    int direcaoHorizontal = 1;  // 1 casa para direita

    // Loop externo para movimentos verticais
    for (int i = 1; i <= direcaoVertical; i++) {
        if (i == 2) {
            printf("Cima (última casa vertical)\n");
            continue;  // Só imprime e segue
        }
        printf("Cima\n");
    }

    // Loop interno para movimento horizontal
    for (int j = 1; j <= direcaoHorizontal; j++) {
        if (j > 1) break;  // Não deveria acontecer, mas segurança
        printf("Direita\n");
    }
}

int main() {
    // -------------------------------
    // Movimento da TORRE: 5 casas para a direita usando recursividade
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\n");  // Separador visual

    // -------------------------------
    // Movimento do BISPO: 5 casas na diagonal para cima e direita usando recursividade
    printf("Movimento do Bispo:\n");
    moverBispo(5);

    printf("\n");  // Separador visual

    // Movimento adicional do Bispo com loops aninhados: 2 verticais e 2 horizontais
    moverBispoComLoops(2, 2);

    printf("\n");  // Separador visual

    // -------------------------------
    // Movimento da RAINHA: 8 casas para a esquerda usando recursividade
    printf("Movimento da Rainha:\n");
    moverRainha(8);

    printf("\n");  // Separador visual

    // -------------------------------
    // Movimento do CAVALO: loops aninhados, condições de controle
    moverCavalo();

    return 0;
}
