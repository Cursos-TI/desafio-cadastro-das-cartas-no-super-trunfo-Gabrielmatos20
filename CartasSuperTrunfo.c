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
    scanf("%s", &codigo1);

    printf("Digite o País: ");
    scanf(" %[^\n]", &pais1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf(" %d", &pontos1);

    densidade1 = (float) populacao1 / area1;
    pib_per_capita1 = pib1 / (float) populacao1;
    super_poder1 = (float) populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1.0f / densidade1);

    // --- Entrada Carta 2 ---
    printf("\nEntrada da carta 2\n");
    printf("Digite o código da 2° carta (ex: A02): ");
    scanf("%s", codigo2);

    printf("Digite o País: ");
    scanf(" %[^\n]", pais2);

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
    super_poder2 = (float) populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1.0f / densidade2);

    // --- Comparação ---
    printf("\n---Comparação---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade demografica\n");
    printf("6. PIB per capita\n");
    printf("7. Super poder\n");
    printf("8. Todos\n");
    printf("\nQual atributo voce quer comparar?: ");
    scanf("%d", &comparacao);

    switch (comparacao) {
        case 1:
            printf("\n***Comparação da População***\n");
            if (populacao1 > populacao2) {
                printf("Carta %s (%s) venceu!\n", codigo1, pais1);
            } else if (populacao2 > populacao1) {
                printf("Carta %s (%s) venceu!\n", codigo2, pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("\n***Comparação da Área***\n");
            if (area1 > area2) {
                printf("Carta %s (%s) venceu!\n", codigo1, pais1);
            } else if (area2 > area1) {
                printf("Carta %s (%s) venceu!\n", codigo2, pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("\n***Comparação do PIB***\n");
            if (pib1 > pib2) {
                printf("Carta %s (%s) venceu!\n", codigo1, pais1);
            } else if (pib2 > pib1) {
                printf("Carta %s (%s) venceu!\n", codigo2, pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("\n***Comparação dos Pontos Turísticos***\n");
            if (pontos1 > pontos2) {
                printf("Carta %s (%s) venceu!\n", codigo1, pais1);
            } else if (pontos2 > pontos1) {
                printf("Carta %s (%s) venceu!\n", codigo2, pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("\n***Comparação da Densidade Demográfica***\n");
            if (densidade1 < densidade2) { // menor vence
                printf("Carta %s (%s) venceu!\n", codigo1, pais1);
            } else if (densidade2 < densidade1) {
                printf("Carta %s (%s) venceu!\n", codigo2, pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6:
            printf("\n***Comparação do PIB per Capita***\n");
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Carta %s (%s) venceu!\n", codigo1, pais1);
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("Carta %s (%s) venceu!\n", codigo2, pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 7:
            printf("\n***Comparação do Super Poder***\n");
            if (super_poder1 > super_poder2) {
                printf("Carta %s (%s) venceu!\n", codigo1, pais1);
            } else if (super_poder2 > super_poder1) {
                printf("Carta %s (%s) venceu!\n", codigo2, pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 8:
            printf("\n***Comparação Completa***\n");

            printf("População: ");
            if (populacao1 > populacao2) {
                printf("Carta %s venceu (%s)\n", codigo1, pais1);
            } else if (populacao2 > populacao1) {
                printf("Carta %s venceu (%s)\n", codigo2, pais2);
            } else {
                printf("Empate\n");
            }

            printf("Área: ");
            if (area1 > area2) {
                printf("Carta %s venceu (%s)\n", codigo1, pais1);
            } else if (area2 > area1) {
                printf("Carta %s venceu (%s)\n", codigo2, pais2);
            } else {
                printf("Empate\n");
            }

            printf("PIB: ");
            if (pib1 > pib2) {
                printf("Carta %s venceu (%s)\n", codigo1, pais1);
            } else if (pib2 > pib1) {
                printf("Carta %s venceu (%s)\n", codigo2, pais2);
            } else {
                printf("Empate\n");
            }

            printf("Pontos Turísticos: ");
            if (pontos1 > pontos2) {
                printf("Carta %s venceu (%s)\n", codigo1, pais1);
            } else if (pontos2 > pontos1) {
                printf("Carta %s venceu (%s)\n", codigo2, pais2);
            } else {
                printf("Empate\n");
            }

            printf("Densidade: ");
            if (densidade1 < densidade2) {
                printf("Carta %s venceu (%s)\n", codigo1, pais1);
            } else if (densidade2 < densidade1) {
                printf("Carta %s venceu (%s)\n", codigo2, pais2);
            } else {
                printf("Empate\n");
            }

            printf("PIB per capita: ");
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Carta %s venceu (%s)\n", codigo1, pais1);
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("Carta %s venceu (%s)\n", codigo2, pais2);
            } else {
                printf("Empate\n");
            }

            printf("Super poder: ");
            if (super_poder1 > super_poder2) {
                printf("Carta %s venceu (%s)\n", codigo1, pais1);

                printf("\nvencedor geral: carta %s (%s)\n", codigo1, pais1);
            } else if (super_poder2 > super_poder1) {
                printf("Carta %s venceu (%s)\n", codigo2, pais2);

                printf("\nvencedor geral: carta %s (%s)\n", codigo2, pais2);
            } else {
                printf("Empate\n");

                printf("\nEmpate geral a pontuação das cartas sao iguais\n");
            }
            
            break;
    }

    return 0;
}