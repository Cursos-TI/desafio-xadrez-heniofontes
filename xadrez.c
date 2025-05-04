#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

 // Movimento da Torre: 5 casas para a direita (usando for)
#include <stdio.h>

/*
 * Programa: Simulação avançada de movimentos de peças de xadrez.
 * Peças: Torre, Bispo, Rainha e Cavalo.
 * Objetivo: Usar recursividade e loops complexos para simular movimentos.
 * Autor: Hênio
 */

// Função recursiva para movimentar a Torre (horizontalmente para a direita)
int moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return 0;
    printf("Direita\n");
    return moverTorre(casasRestantes - 1);
}

// Função recursiva para movimentar a Rainha (horizontalmente para a esquerda)
int moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return 0;
    printf("Esquerda\n");
    return moverRainha(casasRestantes - 1);
}

// Função recursiva para movimentar o Bispo (diagonal: cima e direita)
// Inclui loops aninhados para ilustrar cada passo da diagonal (vertical + horizontal)
int moverBispo(int casasRestantes) {
    if (casasRestantes == 0) return 0;

    // Loop externo: vertical (Cima)
    for (int i = 1; i <= 1; i++) {
        printf("Cima\n");

        // Loop interno: horizontal (Direita)
        for (int j = 1; j <= 1; j++) {
            printf("Direita\n");
        }
    }

    // Chamada recursiva para a próxima casa na diagonal
    return moverBispo(casasRestantes - 1);
}

int main() {
    // Movimento da Torre: 5 casas para a direita
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");  // Separação entre as peças

    // Movimento do Bispo: 5 casas na diagonal (cima e direita)
    int casasBispo = 5;
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");  // Separação entre as peças

    // Movimento da Rainha: 8 casas para a esquerda
    int casasRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");  // Separação entre as peças

    // Movimento do Cavalo: 2 casas para cima + 1 casa para a direita (movimento em "L")
    int casasCavaloVertical = 2;
    int casasCavaloHorizontal = 1;
    printf("Movimento do Cavalo:\n");

    // Loop externo: vertical (Cima)
    for (int i = 1, salto = 0; i <= casasCavaloVertical; i++) {
        if (i == 2) {
            // Simulando um obstáculo imaginário para demonstrar uso de 'continue'
            printf("Cima (Salto Especial)\n");
            salto = 1;
            continue;
        }
        printf("Cima\n");

        // Loop interno: horizontal (Direita)
        for (int j = 1; j <= casasCavaloHorizontal; j++) {
            if (salto) {
                // Simulando que só move para a direita se o salto ocorreu
                printf("Direita\n");
                break;  // Sai do loop interno após mover para a direita
            }
        }
    }

    return 0;
}
