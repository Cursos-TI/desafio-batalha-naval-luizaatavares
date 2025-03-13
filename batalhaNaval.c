#include <stdio.h>
#define TAMANHO 10
#define NAVIO 3

int main() {
    printf("Batalha Naval!\n");
    void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
        for (int i = 0; i < TAMANHO; i++) {
            for (int j = 0; j < TAMANHO; j++) {
                tabuleiro[i][j] = 0;
            }
        }
    }
    
    void posicionarNavio(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, char orientacao) {
        if (orientacao == 'H' && coluna + NAVIO <= TAMANHO) {
            for (int i = 0; i < NAVIO; i++) {
                tabuleiro[linha][coluna + i] = NAVIO;
            }
        } else if (orientacao == 'V' && linha + NAVIO <= TAMANHO) {
            for (int i = 0; i < NAVIO; i++) {
                tabuleiro[linha + i][coluna] = NAVIO;
            }
        }
    }
    
    void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
        for (int i = 0; i < TAMANHO; i++) {
            for (int j = 0; j < TAMANHO; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    }
    
    int main() {
        int tabuleiro[TAMANHO][TAMANHO];
        inicializarTabuleiro(tabuleiro);
        
        // Posicionamento fixo dos navios
        posicionarNavio(tabuleiro, 2, 3, 'H'); // Navio horizontal na linha 2, coluna 3
        posicionarNavio(tabuleiro, 5, 6, 'V'); // Navio vertical na linha 5, coluna 6
        
        exibirTabuleiro(tabuleiro);
        return 0;
    }    