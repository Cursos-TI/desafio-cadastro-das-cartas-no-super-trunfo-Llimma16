#include <stdio.h>

int main() {
    
    char cartaA[4];
    char estadoA[4];
    char codigoCartaA[10];
    char cidadeA[60];
    int codigoCA;
    int populacaoA;
    int numpontosturistcsA;
    float areaA;
    float PIBA;

    char cartaB[4];
    char estadoB[4];
    char codigoCartaB[10];
    char cidadeB[60];
    int codigoCB;
    int populacaoB;
    int numpontosturistcsB;
    float areaB;
    float PIBB;

    printf("Desafio Super Triunfo \n");

    // -------------------- CARTA A --------------------

    printf("\nCarta A: \n");

    printf("Qual codígo da carta? \n");
    scanf(" %s", codigoCartaA);

    printf("Qual o estado? \n");
    scanf(" %[^\n]" , estadoA);

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

// -------------------- CARTA B --------------------
    printf("\nCarta B: \n");

    printf("Qual codígo da carta? \n");
    scanf(" %s", codigoCartaB);

    printf("Qual o estado? \n");
    scanf(" %[^\n]", estadoB);

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

     // -------------------- IMPRESSÃO --------------------

    printf("\n=========== RESULTADO ===========\n");

    printf("\n--- CARTA A ---\n");
    printf("\nCarta A: %s \n",cartaA);
    printf("Código: %s\n", codigoCartaA);
    printf("Estado: %s \n",estadoA);
    printf("Nome da Cidade: %s \n",cidadeA);
    printf("População: %d \n",populacaoA);
    printf("ÁREA: %.2f KM² \n",areaA);
    printf("PIB: %.2f bilhões \n",PIBA);
    printf("Números de Pontos Turísticos: %d \n",numpontosturistcsA);

    printf("\n--- CARTA B ---\n");
    printf("\nCarta B: %s \n",cartaB);
    printf("Código: %s\n", codigoCartaB);
    printf("Estado: %s \n",estadoB);
    printf("Nome da Cidade: %s \n",cidadeB);
    printf("População: %d \n",populacaoB);
    printf("ÁREA: %.2f KM² \n",areaB);
    printf("PIB: %.2f bilhões \n",PIBB);
    printf("Números de Pontos Turísticos: %d \n",numpontosturistcsB);

    return 0;
}
