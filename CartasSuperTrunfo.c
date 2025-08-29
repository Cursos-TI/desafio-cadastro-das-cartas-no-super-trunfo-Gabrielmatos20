#include <stdio.h>

int main() {
    // Variaveis Carta 1
    char codigo1[4], estado1[50], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pib_per_capita1, super_poder1;

    // Variaveis Carta 2
    char codigo2[4], estado2[50], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pib_per_capita2, super_poder2;

    // --- Entrada Carta 1 ---
    printf("Digite o código da 1° carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite a cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = (float) populacao1 / area1;
    pib_per_capita1 = pib1 / (float) populacao1;
    super_poder1 = (float) populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1 / densidade1);

    // --- Saída Carta 1 ---
    printf("\n********************************\n");
    printf("1° carta - Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    printf("********************************\n");

    // --- Entrada Carta 2 ---
    printf("Digite o código da 2° carta (ex: A02): ");
    scanf("%s", codigo2);

    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite a cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos2);

    densidade2 = (float) populacao2 / area2;
    pib_per_capita2 = pib2 / (float) populacao2;
    super_poder2 = (float) populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1 / densidade2);

    // --- Saída Carta 2 ---
    printf("\n********************************\n");
    printf("2° carta - Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    printf("********************************\n");

    
    printf("---Comparação---\n");
    printf("********************************\n");

    if (populacao1>populacao2){
        printf("\nPopulação: Carta 1 venceu (%d)\n", populacao1);
    }else{
        printf("População: Carta 2 venceu (%d)\n", populacao2);
    }

    if (area1>area2){
        printf("Área: Carta 1 venceu (%.2fkm²)\n", area1);
    }else{
        printf("Área: Carta 2 venceu (%.2fkm²)\n", area2);
    }

    if (pib1>pib2){
        printf("PIB: Carta 1 venceu (R$%.2f)\n", pib1);
    }else{
        printf("PIB: Carta 2 venceu (R$%.2f)\n", pib2);
    }

    if (pontos1>pontos2){
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1);
    }else{
        printf("Pontos Turísticos: Carta 2 venceu (%d)\n", pontos2);
    }

    if (densidade1<densidade2){
        printf("Densidade Populacional: Carta 1 venceu (%.2f)\n", densidade1);
    }else{
        printf("Densidade Populacional: Carta 2 venceu (%.2f)\n", densidade2);
    }

    if (pib_per_capita1>pib_per_capita2){
        printf("PIB per Capita: Carta 1 venceu (%.2f)\n", pib_per_capita1);
    }else{
        printf("PIB per Capita: Carta 2 venceu (%.2f)\n", pib_per_capita2);
    }
    if (super_poder1>super_poder2){
        printf("Super Poder: Carta 1 venceu (%.2f)\n", super_poder1);
    }else{
        printf("Super Poder: Carta 2 venceu (%.2f)\n", super_poder2);
    }
    printf("\n********************************\n");
    return 0;
}
