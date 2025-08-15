#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Teste larissa
// Restrições: Sem uso de estruturas de repetição (for/while) ou decisão (if/else).

/*
 * IMPORTANTE sobre entradas:
 * - Estado: digite APENAS UMA LETRA de A a H (ex.: A)
 * - Código: digite exatamente como "A01" (sem espaços)
 * - População e Pontos Turísticos: digite SOMENTE NÚMEROS (sem pontos, vírgulas ou texto)
 *   ex.: 15000000
 * - Área e PIB: use ponto como separador decimal (ex.: 1521.11 e 699.28)
 *
 * Por que algumas perguntas eram "puladas"?
 *   Misturar scanf para números/char com inputs contendo palavras ("parana", "3milhoes")
 *   deixa resíduos no buffer. A solução abaixo usa APENAS fgets para ler a linha inteira
 *   e depois converte o que for necessário. Assim, cada pergunta consome sua própria linha
 *   e não "invade" a próxima.
 */

// Estrutura para armazenar os dados de cada carta
typedef struct {
    char estado;                 // 'A' a 'H'
    char codigo[4];              // "A01" (3 chars + terminador '\0')
    char nomeCidade[100];        // Nome com espaços
    int  populacao;              // Inteiro
    float areaKm2;               // Float (km²)
    float pibBilhoes;            // Float (em bilhões de reais)
    int  numPontosTuristicos;    // Inteiro
} Carta;

// Lê uma linha inteira do teclado, mostra um prompt e remove o '\n' final.
// Observação: não usamos if/else nem laços para respeitar as restrições.
void lerLinha(const char *prompt, char *dest, size_t tam) {
    printf("%s", prompt);
    fgets(dest, tam, stdin);                   // lê a linha completa (inclusive espaços)
    dest[strcspn(dest, "\n")] = '\0';        // remove o '\n' se existir
}

int main(void) {
    Carta carta1, carta2;
    char buffer[128]; // buffer temporário para conversões

    /* ============================
     * Entrada de dados - CARTA 1
     * ============================ */
    printf("=== Cadastro da Carta 1 ===\n");

    lerLinha("Estado (A-H): ", buffer, sizeof(buffer));
    carta1.estado = buffer[0];                 // pega o primeiro caractere digitado

    lerLinha("Código da carta (ex: A01): ", buffer, sizeof(buffer));
    snprintf(carta1.codigo, sizeof(carta1.codigo), "%.3s", buffer); // até 3 chars

    lerLinha("Nome da cidade: ", carta1.nomeCidade, sizeof(carta1.nomeCidade));

    lerLinha("População (apenas números, sem pontos): ", buffer, sizeof(buffer));
    carta1.populacao = (int) strtol(buffer, NULL, 10); // converte string -> int

    lerLinha("Área em km2 (use ponto, ex.: 1521.11): ", buffer, sizeof(buffer));
    carta1.areaKm2 = strtof(buffer, NULL);            // string -> float

    lerLinha("PIB em bilhões (use ponto, ex.: 699.28): ", buffer, sizeof(buffer));
    carta1.pibBilhoes = strtof(buffer, NULL);

    lerLinha("Número de pontos turísticos (apenas números): ", buffer, sizeof(buffer));
    carta1.numPontosTuristicos = (int) strtol(buffer, NULL, 10);

    /* ============================
     * Entrada de dados - CARTA 2
     * ============================ */
    printf("\n=== Cadastro da Carta 2 ===\n");

    lerLinha("Estado (A-H): ", buffer, sizeof(buffer));
    carta2.estado = buffer[0];

    lerLinha("Código da carta (ex: B03): ", buffer, sizeof(buffer));
    snprintf(carta2.codigo, sizeof(carta2.codigo), "%.3s", buffer);

    lerLinha("Nome da cidade: ", carta2.nomeCidade, sizeof(carta2.nomeCidade));

    lerLinha("População (apenas números, sem pontos): ", buffer, sizeof(buffer));
    carta2.populacao = (int) strtol(buffer, NULL, 10);

    lerLinha("Área em km2 (use ponto, ex.: 1200.25): ", buffer, sizeof(buffer));
    carta2.areaKm2 = strtof(buffer, NULL);

    lerLinha("PIB em bilhões (use ponto, ex.: 300.50): ", buffer, sizeof(buffer));
    carta2.pibBilhoes = strtof(buffer, NULL);

    lerLinha("Número de pontos turísticos (apenas números): ", buffer, sizeof(buffer));
    carta2.numPontosTuristicos = (int) strtol(buffer, NULL, 10);

    /* ============================
     * Saída de dados formatada
     * ============================ */
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.areaKm2);
    printf("PIB: %.2f bilhões de reais\n", carta1.pibBilhoes);
    printf("Número de Pontos Turísticos: %d\n", carta1.numPontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.areaKm2);
    printf("PIB: %.2f bilhões de reais\n", carta2.pibBilhoes);
    printf("Número de Pontos Turísticos: %d\n", carta2.numPontosTuristicos);

    return 0;
}
