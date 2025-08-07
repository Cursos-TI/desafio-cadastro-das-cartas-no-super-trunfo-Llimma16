#include <stdio.h>

int main() {
    // Carta A
    char estadoA;
    char codigoCartaA[10];
    char cidadeA[30];
    unsigned long int populacaoA;
    int numpontosturistcsA;
    float areaA;
    float PIBA;

    // Carta B
    char estadoB;
    char codigoCartaB[10];
    char cidadeB[30];
    unsigned long int populacaoB;
    int numpontosturistcsB;
    float areaB;
    float PIBB;

    printf("Desafio Super Trunfo\n");

    // Entrada Carta A
    printf("\nCarta A:\n");

    printf("Qual é o seu estado (uma letra de 'A' a 'H')?\n");
    scanf(" %c", &estadoA);

    printf("Qual o código da carta?\n");
    scanf(" %9s", codigoCartaA);

    printf("Qual a cidade?\n");
    scanf(" %29[^\n]", cidadeA);

    printf("Quanto de população?\n");
    scanf("%lu", &populacaoA);

    printf("Quanto de área (km²)?\n");
    scanf("%f", &areaA);

    printf("Qual o PIB (em bilhões de reais)?\n");
    scanf("%f", &PIBA);

    printf("Quantos Pontos Turísticos?\n");
    scanf("%d", &numpontosturistcsA);

    // Entrada Carta B
    printf("\nCarta B:\n");

    printf("Qual é o seu estado (uma letra de 'A' a 'H')?\n");
    scanf(" %c", &estadoB);

    printf("Qual o código da carta?\n");
    scanf(" %9s", codigoCartaB);

    printf("Qual a cidade?\n");
    scanf(" %29[^\n]", cidadeB);

    printf("Quanto de população?\n");
    scanf("%lu", &populacaoB);

    printf("Qual a área (km²)?\n");
    scanf("%f", &areaB);

    printf("Qual o PIB (em bilhões de reais)?\n");
    scanf("%f", &PIBB);

    printf("Quantos Pontos Turísticos?\n");
    scanf("%d", &numpontosturistcsB);

    // Saída
    printf("\n=========== RESULTADO ===========\n");

    printf("\n--- CARTA A ---\n");
    printf("Código: %s\n", codigoCartaA);
    printf("Estado: %c\n", estadoA);
    printf("Cidade: %s\n", cidadeA);
    printf("População: %lu\n", populacaoA);
    printf("ÁREA: %.2f KM²\n", areaA);
    printf("PIB: %.2f bilhões\n", PIBA);
    printf("Números de Pontos Turísticos: %d\n", numpontosturistcsA);

    printf("\n--- CARTA B ---\n");
    printf("Código: %s\n", codigoCartaB);
    printf("Estado: %c\n", estadoB);
    printf("Cidade: %s\n", cidadeB);
    printf("População: %lu\n", populacaoB);
    printf("ÁREA: %.2f KM²\n", areaB);
    printf("PIB: %.2f bilhões\n", PIBB);
    printf("Números de Pontos Turísticos: %d\n", numpontosturistcsB);

    return 0;
}
