#include <stdio.h>

int main() {
    
    char cartaA[4];
    char estadoA[4];
    char codigoCartaA[10];
    char cidadeA[30];
    int populacaoA;
    int numpontosturistcsA;
    float areaA;
    float PIBA;

    char cartaB[4];
    char estadoB[4];
    char codigoCartaB[10];
    char cidadeB[30];
    int populacaoB;
    int numpontosturistcsB;
    float areaB;
    float PIBB;

    printf("Desafio Super Triunfo \n");

    printf("\nCarta A: \n");

    printf("Qual codígo da carta? \n");
    scanf(" %s", codigoCartaA);

    printf("Qual é o seu estado (uma letra de 'A' a 'H')? \n");
    scanf(" %c", &estadoA);

    printf("Qual a cidade? \n");
    scanf(" %[^\n]", cidadeA);
    printf("Quanto de população? \n");
    scanf("%d", &populacaoA);

    printf("Quanto de área(km²) ? \n");
    scanf("%f", &areaA);

    printf("Qual o PIB? \n");
    scanf("%f", &PIBA);

     printf("Quantos Pontos Turísticos? \n");
    scanf("%d", &numpontosturistcsA);

    printf(" \nCarta B: \n");

    printf("Qual codígo da carta? \n");
    scanf(" %s", codigoCartaB);

    printf("Qual é o seu estado (uma letra de 'A' a 'H')? \n ");
    scanf(" %c", estadoB);

    printf("Qual a cidade? \n");
    scanf(" %[^\n]", cidadeB);

    printf("Quanto de população? \n");
    scanf("%d", &populacaoB);

    printf("Qual a área(km²)? \n");
    scanf("%f", &areaB);

    printf("Qual o PIB? \n");
    scanf("%f", &PIBB);

     printf("Quantos Pontos Turísticos? \n");
    scanf("%d", &numpontosturistcsB);

    printf("\n=========== RESULTADO ===========\n");

    printf("\n--- CARTA A ---\n");
    printf("\nCarta A: %s \n",cartaA);
    printf("Código: %s \n", codigoCartaA);
    printf("Estado: %c \n",estadoA);
    printf("Cidade: %s \n",cidadeA);
    printf("População: %d \n",populacaoA);
    printf("ÁREA: %.2f KM² \n",areaA);
    printf("PIB: %.2f bilhões \n",PIBA);
    printf("Números de Pontos Turísticos: %d \n",numpontosturistcsA);

    printf("\n--- CATA B ---\n");
    printf("\nCarta B: %s \n",cartaB);
    printf("Código: %s \n", codigoCartaB);
    printf("Estado: %c \n",estadoB);
    printf("Cidade: %s \n",cidadeB);
    printf("População: %d \n",populacaoB);
    printf("ÁREA: %.2f KM² \n",areaB);
    printf("PIB: %.2f bilhões \n",PIBB);
    printf("Números de Pontos Turísticos: %d \n",numpontosturistcsB);

    return 0;
}
