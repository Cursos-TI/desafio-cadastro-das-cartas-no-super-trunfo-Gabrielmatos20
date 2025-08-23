#include <stdio.h>

int main() {
    //declaração de variávei
    char codigo[4];
    char estado[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_pop;
    float pib_per_capita;

    //obtendo as informações da 1° carta
    printf("Digite o código da 1° carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o estado: ");
    scanf("%s", &estado);

    printf("Digite a cidade: ");
    scanf("%s", &cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    densidade_pop = populacao / area;
    pib_per_capita = pib / populacao;

    //imprimindo na tela as informações da 1° carta
    printf("\n********************************\n");
    printf("1° carta - Código: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Numero de pontos turísticos: %d\n", pontos_turisticos);
    printf("densidade populacional: %f\n", densidade_pop);
    printf("PIB per capita: %f\n", pib_per_capita);
    printf("********************************\n");

    //obtendo informações da 2° carta
    printf("Digite o código da 1° carta (ex: A01): ");
    scanf("%s", &codigo);

    printf("Digite o estado: ");
    scanf("%s", estado);

    printf("Digite a cidade: ");
    scanf("%s", cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    densidade_pop = (float) populacao / area;
    pib_per_capita = (float) pib / populacao;

    //imprimindo na tela as informações da 2° carta
    printf("\n********************************\n");
    printf("2° carta - Código: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Numero de pontos turísticos: %d\n", pontos_turisticos);
    printf("densidade populacional: %f\n", densidade_pop);
    printf("PIB per capita: %f\n", pib_per_capita);
    printf("********************************\n");

    return 0;
}