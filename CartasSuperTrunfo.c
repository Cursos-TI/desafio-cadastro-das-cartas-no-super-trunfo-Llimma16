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

    printf("\n===== CALCULOS =====\n");

    // Cálculo seguro da densidade populacional
    if (AreaA != 0)
        DensidadePopulacionalA = (float)PopulacaoA / AreaA;
    else
        DensidadePopulacionalA = 0.0F;

    if (AreaB != 0)
        DensidadePopulacionalB = (float)PopulacaoB / AreaB;
    else
        DensidadePopulacionalB = 0.0F;

    // Cálculo seguro do PIB per capita
    if (PopulacaoA != 0)
        PIBperCapitaA = (PIBA * 1e9) / PopulacaoA;
    else
        PIBperCapitaA = 0.0F;

    if (PopulacaoB != 0)
        PIBperCapitaB = (PIBB * 1e9) / PopulacaoB;
    else
        PIBperCapitaB = 0.0F;

    // Cálculo do Super Poder usando valores seguros
    float inversoDensidadeA = (DensidadePopulacionalA != 0) ? (1.0F / DensidadePopulacionalA) : 0.0F;
    float inversoDensidadeB = (DensidadePopulacionalB != 0) ? (1.0F / DensidadePopulacionalB) : 0.0F;

    SuperPoderA = (float)PopulacaoA + AreaA + PIBA + (float)NumPontosTuristicosA + PIBperCapitaA + inversoDensidadeA;
    SuperPoderB = (float)PopulacaoB + AreaB + PIBB + (float)NumPontosTuristicosB + PIBperCapitaB + inversoDensidadeB;

    printf("\n===== Resultado =====\n");

    printf("\n--CARTA A--\n");
    printf("Código: %s\n", CodCartaA);
    printf("Estado: %c\n", EstadoA);
    printf("Cidade: %s\n", CidadeA);
    printf("População: %lu\n", PopulacaoA);
    printf("Área: %.2f km²\n", AreaA);
    printf("PIB: %.2f bilhões de reais\n", PIBA);
    printf("Pontos turísticos: %d\n", NumPontosTuristicosA);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacionalA);
    printf("PIB per Capita: %.2f reais\n", PIBperCapitaA);
    printf("Super Poder: %.2f\n", SuperPoderA);

    printf("\n--CARTA B--\n");
    printf("Código: %s\n", CodCartaB);
    printf("Estado: %c\n", EstadoB);
    printf("Cidade: %s\n", CidadeB);
    printf("População: %lu\n", PopulacaoB);
    printf("Área: %.2f km²\n", AreaB);
    printf("PIB: %.2f bilhões de reais\n", PIBB);
    printf("Pontos turísticos: %d\n", NumPontosTuristicosB);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacionalB);
    printf("PIB per Capita: %.2f reais\n", PIBperCapitaB);
    printf("Super Poder: %.2f\n", SuperPoderB);

    // Comparações organizadas
    printf("\n===== Comparação de Cartas =====\n");

    printf("População: Carta %d venceu (%d)\n", 
        (PopulacaoA > PopulacaoB) ? 1 : 2, 
        (PopulacaoA > PopulacaoB) ? 1 : 0);

    printf("Área: Carta %d venceu (%d)\n", 
        (AreaA > AreaB) ? 1 : 2, 
        (AreaA > AreaB) ? 1 : 0);

    printf("PIB: Carta %d venceu (%d)\n", 
        (PIBA > PIBB) ? 1 : 2, 
        (PIBA > PIBB) ? 1 : 0);

    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
        (NumPontosTuristicosA > NumPontosTuristicosB) ? 1 : 2, 
        (NumPontosTuristicosA > NumPontosTuristicosB) ? 1 : 0);

    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
        (DensidadePopulacionalA < DensidadePopulacionalB) ? 1 : 2, 
        (DensidadePopulacionalA < DensidadePopulacionalB) ? 1 : 0);

    printf("PIB per Capita: Carta %d venceu (%d)\n", 
        (PIBperCapitaA > PIBperCapitaB) ? 1 : 2, 
        (PIBperCapitaA > PIBperCapitaB) ? 1 : 0);

    printf("Super Poder: Carta %d venceu (%d)\n", 
        (SuperPoderA > SuperPoderB) ? 1 : 2, 
        (SuperPoderA > SuperPoderB) ? 1 : 0);

    return 0;
}