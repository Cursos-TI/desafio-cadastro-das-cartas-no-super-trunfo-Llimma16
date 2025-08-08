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

      printf("\n=========== Comparação ===========\n");

if (codigoCartaA > codigoCartaB) {
    printf("Carta A tem o maior código (%s > %s)\n", codigoCartaA, codigoCartaB);
} else if (codigoCartaA < codigoCartaB) {
    printf("Carta B tem o maior código (%s > %s)\n", codigoCartaB, codigoCartaA);
} else {
    printf("Os códigos são iguais (%s = %s)\n", codigoCartaA, codigoCartaB);
}

if (estadoA > estadoB) {
    printf("Carta A tem um estado maior: (%c > %c)\n", estadoA, estadoB);
} else if (estadoA < estadoB) {
    printf("Carta B tem um estado maior: (%c > %c)\n", estadoB, estadoA);
} else {
    printf("Os estados têm valores que são iguais. (%c = %c)\n", estadoA, estadoB);
}

if (cidadeA > cidadeB) {
    printf("Carta A tem o maior cidade: (%s > %s)\n", cidadeA, cidadeB);
} else if (cidadeA < cidadeB) {
    printf("Carta B tem o maior cidade: (%s > %s)\n", cidadeB, cidadeA);
} else {
    printf("As cidades têm mesmo valor:  (%s = %s)\n", cidadeA, cidadeB);
}

if (populacaoA > populacaoB) {
    printf("Carta A tem a maior população: (%lu > %lu)\n", populacaoA, populacaoB);
} else if (populacaoA < populacaoB) {
    printf("Carta B tem a maior população: (%lu > %lu)\n", populacaoB, populacaoA);
} else {
    printf("A população tem valores iguais. (%lu = %lu)\n", populacaoA, populacaoB);
}

if (areaA > areaB) {
    printf("Carta A tem a maior área: (%.2f > %.2f)\n", areaA, areaB);
} else if (areaA < areaB) {
    printf("Carta B tem o maior área: (%.2f > %.2f)\n", areaB, areaA);
} else {
    printf("As áreas têm valores iguais. (%.2f = %.2f)\n", areaA, areaB);
}

if (PIBA > PIBB) {
    printf("Carta A tem o maior PIB: (%.2f > %.2f)\n", PIBA, PIBB);
} else if (PIBA < PIBB) {
    printf("Carta B tem o maior PIB: (%.2f > %.2f)\n", PIBB, PIBA);
} else {
    printf("Os valores de PIBs são iguais. (%.2f = %.2f)\n", PIBA, PIBB);
}

if (numpontosturistcsA > numpontosturistcsB) {
    printf("Carta A tem o maior número de pontos turísticos: (%d > %d)\n", numpontosturistcsA, numpontosturistcsB);
} else if (numpontosturistcsA < numpontosturistcsB) {
    printf("Carta B tem o maior número de pontos turísticos: (%d > %d)\n", numpontosturistcsB, numpontosturistcsA);
} else {
    printf("Os valores dos pontos turísticos são iguais (%d = %d)\n", numpontosturistcsA, numpontosturistcsB);
}

    return 0;
}
