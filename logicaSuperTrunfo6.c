#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int populacao;
    int area;
    int pib;
    int densidade_demografica;
} Pais;

void exibirAtributos() {
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade Demográfica\n");
}

int obterAtributo(Pais p, int opcao) {
    switch (opcao) {
        case 1: return p.populacao;
        case 2: return p.area;
        case 3: return p.pib;
        case 4: return p.densidade_demografica;
        default: return 0;
    }
}

int main() {
    Pais pais1 = {"Brasil", 213000000, 8515767, 14400, 25};
    Pais pais2 = {"Argentina", 45100000, 2780400, 10000, 16};

    int escolha1, escolha2;
    
    printf("Escolha dois atributos para comparar:\n");
    exibirAtributos();
    
    printf("Digite o número do primeiro atributo: ");
    scanf("%d", &escolha1);
    
    do {
        printf("Digite o número do segundo atributo (diferente do primeiro): ");
        scanf("%d", &escolha2);
    } while (escolha1 == escolha2);
    
    int valor1_pais1 = obterAtributo(pais1, escolha1);
    int valor2_pais1 = obterAtributo(pais1, escolha2);
    int valor1_pais2 = obterAtributo(pais2, escolha1);
    int valor2_pais2 = obterAtributo(pais2, escolha2);
    
    int pontos_pais1 = 0, pontos_pais2 = 0;
    
    if (escolha1 == 4) {
        if (valor1_pais1 < valor1_pais2) pontos_pais1++;
        else if (valor1_pais1 > valor1_pais2) pontos_pais2++;
    } else {
        if (valor1_pais1 > valor1_pais2) pontos_pais1++;
        else if (valor1_pais1 < valor1_pais2) pontos_pais2++;
    }
    
    if (escolha2 == 4) {
        if (valor2_pais1 < valor2_pais2) pontos_pais1++;
        else if (valor2_pais1 > valor2_pais2) pontos_pais2++;
    } else {
        if (valor2_pais1 > valor2_pais2) pontos_pais1++;
        else if (valor2_pais1 < valor2_pais2) pontos_pais2++;
    }
    
    int soma_pais1 = valor1_pais1 + valor2_pais1;
    int soma_pais2 = valor1_pais2 + valor2_pais2;
    
    printf("\nComparação:\n");
    printf("%-12s | %-20s | %-20s\n", "", pais1.nome, pais2.nome);
    printf("%-12s | %-20d | %-20d\n", "Atributo 1", valor1_pais1, valor1_pais2);
    printf("%-12s | %-20d | %-20d\n", "Atributo 2", valor2_pais1, valor2_pais2);
    printf("%-12s | %-20d | %-20d\n", "Soma", soma_pais1, soma_pais2);
    
    if (soma_pais1 > soma_pais2) {
        printf("\nVencedor: %s!\n", pais1.nome);
    } else if (soma_pais2 > soma_pais1) {
        printf("\nVencedor: %s!\n", pais2.nome);
    } else {
        printf("\nEmpate!\n");
    }
    
    return 0;
}
