#include <stdio.h>

int vitorias, derrotas, vitoriasaldo;
char nome[50], rank[50];

int main() {
    printf("Qual nome do Heroi?\n");
    scanf("%s", nome);
    printf("Quantas Vitorias teve na rankeada?\n");
    scanf("%d", &vitorias);
    printf("Quantas derrotas teve na rankeada?\n");
    scanf("%d", &derrotas);

    vitoriasaldo = vitorias - derrotas;

    if (vitoriasaldo >= 101) {
        sprintf(rank, "Imortal"); // Definindo o nome do rank como "Imortal"
    } else if (vitoriasaldo >= 100) {
        sprintf(rank, "Lendario"); // Definindo o nome do rank como "Lendario"
    } else if (vitoriasaldo >= 90) {
        sprintf(rank, "Diamante"); // Definindo o nome do rank como "Diamante"
    } else if (vitoriasaldo >= 80) {
        sprintf(rank, "Ouro"); // Definindo o nome do rank como "Ouro"
    } else if (vitoriasaldo >= 50) {
        sprintf(rank, "Prata"); // Definindo o nome do rank como "Prata"
    } else if (vitoriasaldo >= 20) {
        sprintf(rank, "Bronze"); // Definindo o nome do rank como "Bronze"
    } else if (vitoriasaldo >= 10) {
        sprintf(rank, "Ferro"); // Definindo o nome do rank como "Ferro"
    } else {
        sprintf(rank, "Sem rank"); // Se não se encaixar em nenhuma das condições acima, definimos como "Sem rank"
    }

    printf("O Heroi tem o saldo de %d e esta no rank %s\n", vitoriasaldo, rank);

    return 0;
}