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

   printf("\nCarta 1: %s -  População: %.2f\n", cidade1, populacao1);
    printf("Carta 2: %s - População: %.2f\n", cidade2, populacao2);

    if (populacao1 > populacao2){
        printf("Carta 1 venceu!\n", populacao1);
    } else {
        printf("Carta 2 venceu!\n", populacao2);
    }

    return 0;
}
