#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

/*
 * Programa: Cadastro de Cartas do Super Trunfo (Nível Novato)
 * Objetivo: Ler do teclado os dados de DUAS cartas e exibi-los formatados.
 * Restrições: Sem uso de estruturas de repetição ou decisão.
 */

typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[100];
    int  populacao;
    float areaKm2;
    float pibBilhoes;
    int  numPontosTuristicos;
} Carta;

int main() {
    Carta carta1, carta2;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);
    printf("Código da carta (ex: A01): ");
    scanf(" %3s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %99[^\n]", carta1.nomeCidade);
    printf("População: ");
    scanf(" %d", &carta1.populacao);
    printf("Área em km²: ");
    scanf(" %f", &carta1.areaKm2);
    printf("PIB em bilhões: ");
    scanf(" %f", &carta1.pibBilhoes);
    printf("Número de pontos turísticos: ");
    scanf(" %d", &carta1.numPontosTuristicos);

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);
    printf("Código da carta (ex: B03): ");
    scanf(" %3s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %99[^\n]", carta2.nomeCidade);
    printf("População: ");
    scanf(" %d", &carta2.populacao);
    printf("Área em km²: ");
    scanf(" %f", &carta2.areaKm2);
    printf("PIB em bilhões: ");
    scanf(" %f", &carta2.pibBilhoes);
    printf("Número de pontos turísticos: ");
    scanf(" %d", &carta2.numPontosTuristicos);

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.areaKm2);
    printf("PIB: %.2f bilhões de reais\n", carta1.pibBilhoes);
    printf("Número de Pontos Turísticos: %d\n", carta1.numPontosTuristicos);

    // Exibição da Carta 2
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
