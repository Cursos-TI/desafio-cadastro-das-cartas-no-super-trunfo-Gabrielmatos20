#include <stdio.h>

int main() {
    //declaração de variáveis
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    //obtendo as informações da 1° carta
    printf("Digite o código da 1° carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    //imprimindo na tela as informações da 1° carta
    printf("\n********************************\n");
    printf("1° carta - Código: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("********************************\n");

    //obtendo informações da 2° carta
    printf("\nDigite o código da 2° carta (ex: B02): ");
    scanf("%s", codigo);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    //imprimindo na tela as informações da 2° carta
    printf("\n********************************\n");
    printf("2° carta - Código: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("********************************\n");

    return 0;
}