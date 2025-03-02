#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    float populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    printf("Insira os dados da primeira carta:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População (em habitantes): ");
    scanf("%f", &populacao1);

    printf("Área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("PIB da cidade (em milhões de R$): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    printf("\nInsira os dados da segunda carta:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População (em habitantes): ");
    scanf("%f", &populacao2);

    printf("Área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("PIB da cidade (em milhões de R$): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    float densipop1 = populacao1 / area1;
    float densipop2 = populacao2 / area2;
    float pibpercapita1 = pib1 / populacao1;
    float pibpercapita2 = pib2 / populacao2;

    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.0f habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f milhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);

    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.0f habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f milhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);

    printf("\nDensidade populacional da primeira carta: %.2f hab/km²\n", densipop1);
    printf("Densidade populacional da segunda carta: %.2f hab/km²\n", densipop2);
    printf("PIB per capita da primeira carta: R$ %.2f\n", pibpercapita1);
    printf("PIB per capita da segunda carta: R$ %.2f\n", pibpercapita2);

    return 0;
}
