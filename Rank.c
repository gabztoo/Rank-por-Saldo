#include <stdio.h>
#include <string.h>
int main() {
    int vitorias, derrotas, vitoriasaldo;
    char nome[50], rank[20]; 

    // Enquanto o nome digitado for diferente de "fim"...
    while (1) {
        printf("Qual nome do Heroi? (ou digite 'fim' para sair)\n");
        scanf("%s", nome);
        
       // Verificando se o nome digitado é igual a "fim"
        if (strcmp(nome, "fim") == 0) {
            printf("Saindo do programa...\n");
            break;
        }

        printf("Quantas Vitorias teve na rankeada?\n");
        scanf("%d", &vitorias);
        printf("Quantas derrotas teve na rankeada?\n");
        scanf("%d", &derrotas);

        vitoriasaldo = vitorias - derrotas;

        // Atribuição do nome do rank
        if (vitoriasaldo >= 101) {
            sprintf(rank, "Imortal");
        } else if (vitoriasaldo >= 100) {
            sprintf(rank, "Lendario");
        } else if (vitoriasaldo >= 90) {
            sprintf(rank, "Diamante");
        } else if (vitoriasaldo >= 80) {
            sprintf(rank, "Ouro");
        } else if (vitoriasaldo >= 50) {
            sprintf(rank, "Prata");
        } else if (vitoriasaldo >= 20) {
            sprintf(rank, "Bronze");
        } else if (vitoriasaldo >= 10) {
            sprintf(rank, "Ferro");
        } else {
            sprintf(rank, "Sem rank");
        }

        // Exibe o resultado para o jogador atual
        printf("O Heroi %s tem o saldo de %d e esta no rank %s\n\n", nome, vitoriasaldo, rank);
    }

    return 0;
}
