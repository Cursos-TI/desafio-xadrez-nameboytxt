#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
#define BISPO_PASSOS 5
#define TORRE_PASSOS 5
#define RAINHA_PASSOS 8
#define MOV_HORIZONTAL 2 
#define MOV_VERTICAL 1

// ===============================
// Nível Mestre - Funções Recursivas
// ===============================

// Função recursiva para movimentação do Bispo
void moverBispo(int passos) {
    if(passos == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(passos - 1);
}

// Função recursiva para movimentação da Torre
void moverTorre(int passos) {
    if(passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para movimentação da Rainha
void moverRainha(int passos) {
    if(passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("=== Movimentação do Bispo ===\n");
    for(int i = 1; i <= BISPO_PASSOS; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\n=== Movimentação da Torre ===\n");
    int j = 1;
    while(j <= TORRE_PASSOS) {
        printf("Direita\n");
        j++;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\n=== Movimentação da Rainha ===\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while(k <= RAINHA_PASSOS);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n=== Movimentação do Cavalo ===\n");
    for(int h = 1; h <= MOV_HORIZONTAL; h++) {
        printf("Esquerda\n");

        int v = 1;
        while(v <= MOV_VERTICAL) {
            printf("Baixo\n");
            v++;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    printf("\n=== Movimentação do Bispo (Recursivo) ===\n");
    moverBispo(BISPO_PASSOS);

    printf("\n=== Movimentação da Torre (Recursivo) ===\n");
    moverTorre(TORRE_PASSOS);
