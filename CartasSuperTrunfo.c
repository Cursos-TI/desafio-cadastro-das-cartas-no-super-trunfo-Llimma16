#include <stdio.h>

int main() {

    // CARTA A 
    char EstadoA;
    char CidadeA[30];
    char CodCartaA[5];
    unsigned long int PopulacaoA;
    int NumPontosTuritcsA;
    float AreaA;
    float PIBA;
    float DensidadePopulacionalA;
    float PIBperCapitaA;

    // CARTA B 
    char EstadoB;
    char CidadeB[30];
    char CodCartaB[5];
    unsigned long int PopulacaoB;
    int NumPontosTuritcsB;
    float AreaB;
    float PIBB;
    float DensidadePopulacionalB;
    float  PIBperCapitaB;
     

    printf("-------CARTA A------\n");
    printf("Qual o código da sua carta?\n");
    scanf("%4s", CodCartaA);

    printf("Qual o seu estado (entre A e H)?\n");
    scanf(" %c", &EstadoA);  // espaço antes do %c para ignorar \n

    printf("Qual é o nome da sua cidade?\n");
    scanf(" %29[^\n]", CidadeA);

    printf("Qual a população?\n");
    scanf("%lu", &PopulacaoA);

    printf("Qual a área?\n");
    scanf("%f", &AreaA);

    printf("Qual o PIB?\n");
    scanf("%f", &PIBA);

    printf("Quantos pontos turísticos?\n");
    scanf("%d", &NumPontosTuritcsA);

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
    scanf("%d", &NumPontosTuritcsB);

    ("\n===== CALCULOS =====\n");

    //Dendidade populacional:habitantes por KM² 

    DensidadePopulacionalA = (PopulacaoA / AreaA);
    DensidadePopulacionalB = (PopulacaoB / AreaB);

    //PIB per capita:PIB (bilhões * 1e9) / população

    PIBperCapitaA = (PIBA* 1e9) / PopulacaoA;
    PIBperCapitaB = (PIBB* 1e9) / PopulacaoB;

    printf("\n===== Resultado =====\n");

    printf("\n--CARTA A--\n");
    printf("Código: %s\n", CodCartaA);
    printf("Estado: %c\n", EstadoA);
    printf("Cidade: %s\n", CidadeA);
    printf("População: %lu\n", PopulacaoA);
    printf("Área: %.2f km²\n", AreaA);
    printf("PIB: %.2f bilhões de reais\n", PIBA);
    printf("Pontos turísticos: %d\n", NumPontosTuritcsA);
    printf("Densidade Populacional: %5.2f hab/km²\n", DensidadePopulacionalA);
    printf("PIB per Capita: %5.2f reais\n", PIBperCapitaA);

    printf("\n--CARTA B--\n");
    printf("Código: %s\n", CodCartaB);
    printf("Estado: %c\n", EstadoB);
    printf("Cidade: %s\n", CidadeB);
    printf("População: %lu\n", PopulacaoB);
    printf("Área: %.2f km²\n", AreaB);
    printf("PIB: %.2f bilhões de reais\n", PIBB);
    printf("Pontos turísticos: %d\n", NumPontosTuritcsB);
    printf("Densidade Populacional: %5.2f hab/km²\n", DensidadePopulacionalB);
    printf("PIB per Capita: %5.2f reais\n", PIBperCapitaB);

    return 0;
}