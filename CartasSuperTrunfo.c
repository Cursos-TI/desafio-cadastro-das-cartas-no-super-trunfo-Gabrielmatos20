#include <stdio.h>

int main() {
    // Variaveis Carta 1 e 2
    char codigo1[4], pais1[50], codigo2[4], pais2[50];
    unsigned long int populacao1, populacao2;
    float area1, pib1, area2, pib2;
    int pontos1, pontos2, comparacao;
    float densidade1, pib_per_capita1, super_poder1, densidade2, pib_per_capita2, super_poder2;
   
    
    // --- Entrada Carta 1 ---
    printf("\nEntrada da carta 1\n");
    printf("Digite o código da 1° carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o País: ");
    scanf("%s", pais1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = (float) populacao1 / area1;
    pib_per_capita1 = pib1 / (float) populacao1;
    super_poder1 = (float) populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1 / densidade1);

    printf("\nEntrada da carta 2\n");

    // --- Entrada Carta 2 ---
    printf("\nDigite o código da 2° carta (ex: A02): ");
    scanf("%s", codigo2);

    printf("Digite o País: ");
    scanf("%s", pais2);

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

 
    
    printf("\n---Comparação---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade demografica\n");
    printf("6. PIB per capita\n");
    printf("7. Super poder\n");
    printf("Qual atributo voce quer comparar?: ");
    scanf("%d", &comparacao);
    switch (comparacao)
    {
    case 1:
        printf("***Comparação da população***\n");
        if (populacao1>populacao2){
            printf("\nA carta 1 (%s) tem a população maior do que a carta 2 (%s)\n", pais1, pais2);
            printf("\n População da carta 1 (%lu) população da carta 2 (%lu)", populacao1, populacao2);
        }else if(populacao2>populacao1){
            printf("\nA carta 2 (%s) tem a população maior do que a carta 1 (%s)\n", pais2, pais1);
            printf("\n População da carta 2 (%lu) população da carta 1 (%lu)\n", populacao2, populacao1);
        }else{
            printf("\n Empate!!\n");
            printf("\n População da carta 1 (%lu) população da carta 2 (%lu)\n", populacao1, populacao2);
        }
        break;
    
    case 2:
        printf("***Comparação da Área***");
        if (area1>area2){
            printf("\nA carta 1 (%s) tem a Área maior do que a carta 2 (%s)\n", pais1, pais2);
            printf("\n Área da carta 1 (%lu) Área da carta 2 (%lu)", area1, area2);
        }else if(area2>area1){
            printf("\nA carta 2 (%s) tem a Área maior do que a carta 1 (%s)\n", pais2, pais1);
            printf("\n População da carta 2 (%lu) população da carta 1 (%lu)\n", populacao2, populacao1);
        }else{
            printf("\n Empate!!\n");
            printf("\n Área da carta 1 (%lu) Área da carta 2 (%lu)\n", area1, area2);
        }
    
    return 0;
}
}
