#include <stdio.h>

int main() {
    // CARTA A 
    char EstadoA;
    char CidadeA[30];
    char CodCartaA[5];
    unsigned long int PopulacaoA;
    int NumPontosTuristicosA;
    float AreaA;
    float PIBA;
    float DensidadePopulacionalA;
    float PIBperCapitaA;
    float SuperPoderA;

    // CARTA B 
    char EstadoB;
    char CidadeB[30];
    char CodCartaB[5];
    unsigned long int PopulacaoB;
    int NumPontosTuristicosB;
    float AreaB;
    float PIBB;
    float DensidadePopulacionalB;
    float PIBperCapitaB;
    float SuperPoderB;

    // Entrada CARTA A
    printf("-------CARTA A------\n");
    printf("Qual o código da sua carta?\n");
    scanf("%4s", CodCartaA);

    printf("Qual o seu estado (entre A e H)?\n");
    scanf(" %c", &EstadoA);

    printf("Qual é o nome da sua cidade?\n");
    scanf(" %29[^\n]", CidadeA);

    printf("Qual a população?\n");
    scanf("%lu", &PopulacaoA);

    printf("Qual a área?\n");
    scanf("%f", &AreaA);

    printf("Qual o PIB?\n");
    scanf("%f", &PIBA);

    printf("Quantos pontos turísticos?\n");
    scanf("%d", &NumPontosTuristicosA);

    // Entrada CARTA B
    printf("\n-------CARTA B------\n");
    printf("Qual o código da sua carta?\n");
    scanf("%4s", CodCartaB);

    printf("Qual o seu estado (entre A e H)?\n");
    scanf(" %c", &EstadoB);

    printf("Qual é o nome da sua cidade?\n");
    scanf(" %29[^\n]", CidadeB);

    printf("Qual a população?\n");
    scanf("%lu", &PopulacaoB);

    printf("Qual a área?\n");
    scanf("%f", &AreaB);

    printf("Qual o PIB?\n");
    scanf("%f", &PIBB);

    printf("Quantos pontos turísticos?\n");
    scanf("%d", &NumPontosTuristicosB);

    // ===== CALCULOS =====
    DensidadePopulacionalA = (AreaA != 0) ? (float)PopulacaoA / AreaA : 0.0F;
    DensidadePopulacionalB = (AreaB != 0) ? (float)PopulacaoB / AreaB : 0.0F;

    PIBperCapitaA = (PopulacaoA != 0) ? (PIBA * 1e9) / PopulacaoA : 0.0F;
    PIBperCapitaB = (PopulacaoB != 0) ? (PIBB * 1e9) / PopulacaoB : 0.0F;

    float inversoDensidadeA = (DensidadePopulacionalA != 0) ? (1.0F / DensidadePopulacionalA) : 0.0F;
    float inversoDensidadeB = (DensidadePopulacionalB != 0) ? (1.0F / DensidadePopulacionalB) : 0.0F;

    SuperPoderA = (float)PopulacaoA + AreaA + PIBA + (float)NumPontosTuristicosA + PIBperCapitaA + inversoDensidadeA;
    SuperPoderB = (float)PopulacaoB + AreaB + PIBB + (float)NumPontosTuristicosB + PIBperCapitaB + inversoDensidadeB;

    // ===== MENU DE ATRIBUTOS =====
    int escolha1, escolha2;

    printf("\n===== Escolha de Atributos =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");

    printf("\nEscolha o primeiro atributo: ");
    scanf("%d", &escolha1);

    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &escolha2);
    } while (escolha2 == escolha1);

    // ===== COMPARAÇÃO =====
    float valorA1 = 0, valorB1 = 0, valorA2 = 0, valorB2 = 0;

    // Atributo 1
    switch (escolha1) {
        case 1: valorA1 = PopulacaoA; valorB1 = PopulacaoB; break;
        case 2: valorA1 = AreaA; valorB1 = AreaB; break;
        case 3: valorA1 = PIBA; valorB1 = PIBB; break;
        case 4: valorA1 = NumPontosTuristicosA; valorB1 = NumPontosTuristicosB; break;
        case 5: valorA1 = DensidadePopulacionalA; valorB1 = DensidadePopulacionalB; break;
        case 6: valorA1 = PIBperCapitaA; valorB1 = PIBperCapitaB; break;
        case 7: valorA1 = SuperPoderA; valorB1 = SuperPoderB; break;
    }

    // Atributo 2
    switch (escolha2) {
        case 1: valorA2 = PopulacaoA; valorB2 = PopulacaoB; break;
        case 2: valorA2 = AreaA; valorB2 = AreaB; break;
        case 3: valorA2 = PIBA; valorB2 = PIBB; break;
        case 4: valorA2 = NumPontosTuristicosA; valorB2 = NumPontosTuristicosB; break;
        case 5: valorA2 = DensidadePopulacionalA; valorB2 = DensidadePopulacionalB; break;
        case 6: valorA2 = PIBperCapitaA; valorB2 = PIBperCapitaB; break;
        case 7: valorA2 = SuperPoderA; valorB2 = SuperPoderB; break;
    }

    // Regras de comparação
    float somaA = 0, somaB = 0;

    // Atributo 1
    if (escolha1 == 5) { // densidade -> menor vence
        somaA += (valorA1 < valorB1) ? 1 : 0;
        somaB += (valorB1 < valorA1) ? 1 : 0;
    } else {
        somaA += (valorA1 > valorB1) ? 1 : 0;
        somaB += (valorB1 > valorA1) ? 1 : 0;
    }

    // Atributo 2
    if (escolha2 == 5) { // densidade -> menor vence
        somaA += (valorA2 < valorB2) ? 1 : 0;
        somaB += (valorB2 < valorA2) ? 1 : 0;
    } else {
        somaA += (valorA2 > valorB2) ? 1 : 0;
        somaB += (valorB2 > valorA2) ? 1 : 0;
    }

    // ===== RESULTADOS =====
    printf("\n===== Resultado Final =====\n");
    printf("Cidade A: %s | Cidade B: %s\n", CidadeA, CidadeB);
    printf("Atributo 1 (Escolha %d): Carta A = %.2f | Carta B = %.2f\n", escolha1, valorA1, valorB1);
    printf("Atributo 2 (Escolha %d): Carta A = %.2f | Carta B = %.2f\n", escolha2, valorA2, valorB2);
    printf("Pontuação Final -> Carta A: %.0f | Carta B: %.0f\n", somaA, somaB);

    if (somaA > somaB) {
        printf(">>> Carta A venceu! <<<\n");
    } else if (somaB > somaA) {
        printf(">>> Carta B venceu! <<<\n");
    } else {
        printf(">>> Empate! <<<\n");
    }

    return 0;
}