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
 * Programa: Simulação de movimentos de peças de xadrez.
 * Peças: Torre, Bispo, Rainha e Cavalo.
 * Objetivo: Usar estruturas de repetição para simular movimentos no tabuleiro.
 * Autor: Hênio Fontes
 */
    // Movimento da Torre: 5 casas para a direita (usando for)
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");  // Separação entre as peças

    // Movimento do Bispo: 5 casas na diagonal (cima e direita) (usando while)
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");  // Separação entre as peças

    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);
    printf("\n");  // Separação entre as peças

    // Movimento do Cavalo: 2 casas para baixo + 1 casa para a esquerda (movimento em "L")
    int casasBaixo = 2;
    int casasEsquerda = 1;
    printf("Movimento do Cavalo:\n");

    // Loop externo (for): movimenta 2 casas para baixo
    for (int i = 1; i <= casasBaixo; i++) {
        printf("Baixo\n");

        // Loop interno (while): após cada movimento para baixo, verifica se é a última repetição
        // e executa a parte final do movimento (1 casa para a esquerda)
        if (i == casasBaixo) {  // só move para a esquerda depois de descer 2 vezes
            int j = 1;
            while (j <= casasEsquerda) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}
