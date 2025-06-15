#include <stdio.h>

/************* Funções Recursivas **************/

// Função recursiva para movimentar a Torre para cima
void moverTorreCima(int casas) {
    if (casas == 0) return;
    printf("Torre: Cima\n");
    moverTorreCima(casas - 1);
}

// Função recursiva para movimentar a Torre para a direita
void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Torre: Direita\n");
    moverTorreDireita(casas - 1);
}

// Função recursiva para movimentar a Rainha (cima e direita)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Rainha: Cima\n");
    printf("Rainha: Direita\n");
    moverRainha(casas - 1);
}

// Função para movimentar o Bispo com recursão e loops aninhados
void moverBispoDiagonal(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;

    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            printf("Bispo: Diagonal Direita Cima\n");
        }
    }

    moverBispoDiagonal(vertical - 1, horizontal - 1);
}


/************* Cavalo com Loops Aninhados **************/

// Função para simular o movimento do Cavalo (2 para cima, 1 para direita)
void moverCavalo() {
    int linhas = 8;
    int colunas = 8;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i >= 2 && j <= 6) {
                // Exemplo de uso de continue
                if ((i + j) % 2 == 0) continue;

                printf("Cavalo: 2 Cima, 1 Direita (Posição %d,%d)\n", i, j);

                // Exemplo de uso de break
                if (j == 3) break;
            }
        }
    }
}


/************* Função Principal **************/

int main() {
    // Valores definidos diretamente como variáveis
    int casasTorre = 4;
    int casasRainha = 4;
    int casasBispoVertical = 3;
    int casasBispoHorizontal = 3;

    // Movimento da Torre
    printf("Movimentos da Torre:\n");
    moverTorreCima(casasTorre);
    moverTorreDireita(casasTorre);
    printf("\n");

    // Movimento do Bispo
    printf("Movimentos do Bispo:\n");
    moverBispoDiagonal(casasBispoVertical, casasBispoHorizontal);
    printf("\n");

    // Movimento da Rainha
    printf("Movimentos da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Movimento do Cavalo
    printf("Movimentos do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}

