#include <stdio.h>

int main(){ 
    // Dados pré-definidos
    // Carta 1
    char estado1[] = "A";
    char codigo1[] = "A01";
    char cidade1[] = "Cidade A";
    int populacao1 = 10000;
    float area1 = 500;
    float pib1 = 500000;
    int pontosTuristicos1 = 10;

    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    // Carta 2
    char estado2[] = "B";
    char codigo2[] = "B01";
    char cidade2[] = "Cidade B";
    int populacao2 = 20000;
    float area2 = 1000;
    float pib2 = 100000;
    int pontosTuristicos2 = 20;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Apresentação carta 1
    printf("Dados da Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("\n");

    // Apresentação carta 2
    printf("Dados da Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("\n");


    int escolha1, escolha2;

    // Menu interativo 1
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");

    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);



    // Menu interativo 2
    printf("Escolha o segundo atributo para comparar:\n");
    if (escolha1 !=1) printf("1. População\n");
    if (escolha1 !=2) printf("2. Área\n");
    if (escolha1 !=3) printf("3. PIB\n");
    if (escolha1 !=4) printf("4. Pontos turísticos\n");
    if (escolha1 !=5) printf("5. Densidade populacional\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);

    // Comparação dos atributos escolhidos
    int carta1=0, carta2=0;

    switch (escolha1) {
        case 1:
            if (populacao1 > populacao2) {
                ++carta1;
                printf("A carta n° 1 venceu o primeiro round com a população de %d.\n", populacao1);
            } else if (populacao2 > populacao1) {
                ++carta2;
                printf("A carta n° 2 venceu o primeiro round com população de %d.\n", populacao2);
            } else {
                printf("Empate.\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                ++carta1;
                printf("A carta n° 1 venceu o primeiro round com a área de %.2f km².\n", area1);
            } else if (area2 > area1) {
                ++carta2;
                printf("A carta n° 2 venceu o primeiro round com a área de %.2f km².\n", area2);
            } else {
                printf("Empate.\n");
            }
            break;
        case 3:
            if (pib1 > pib2) {
                ++carta1;
                printf("A carta n° 1 venceu o primeiro round com o PIB de %.2f.\n", pib1);
            } else if (pib2 > pib1) {
                ++carta2;
                printf("A carta n° 2 venceu o primeiro round com o PIB de %.2f.\n", pib2);
            } else {
                printf("Empate.\n");
            }
            break;
        case 4:
            if (pontosTuristicos1 > pontosTuristicos2) {
                ++carta1;
                printf("A carta n° 1 venceu o primeiro round com %d pontos turísticos.\n", pontosTuristicos1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                ++carta2;
                printf("A carta n° 2 venceu o primeiro round com %d pontos turísticos.\n", pontosTuristicos2);
            } else {
                printf("Empate.\n");
            }
            break;
        case 5:
            if (densidade1 < densidade2) {
                ++carta1;
                printf("A carta n° 1 venceu o primeiro round com densidade populacional de %.2f habitantes/km².\n", densidade1);
            } else if (densidade2 < densidade1) {
                ++carta2;
                printf("A carta n° 2 venceu o primeiro round com densidade populacional de %.2f habitantes/km².\n", densidade2);
            } else {
                printf("Empate.\n");
            }
            break;
        }

        switch (escolha2) {
        case 1:
            if (populacao1 > populacao2) {
                ++carta1;
                printf("A carta n° 1 venceu o segundo round com a população de %d.\n", populacao1);
            } else if (populacao2 > populacao1) {
                ++carta2;
                printf("A carta n° 2 venceu o segundo round com população de %d.\n", populacao2);
            } else {
                printf("Empate.\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                ++carta1;
                printf("A carta n° 1 venceu o segundo round com a área de %.2f km².\n", area1);
            } else if (area2 > area1) {
                ++carta2;
                printf("A carta n° 2 venceu o segundo round com a área de %.2f km².\n", area2);
            } else {
                printf("Empate.\n");
            }
            break;
        case 3:
            if (pib1 > pib2) {
                ++carta1;
                printf("A carta n° 1 venceu o segundo round com o PIB de %.2f.\n", pib1);
            } else if (pib2 > pib1) {
                ++carta2;
                printf("A carta n° 2 venceu o segundo round com o PIB de %.2f.\n", pib2);
            } else {
                printf("Empate.\n");
            }
            break;
        case 4:
            if (pontosTuristicos1 > pontosTuristicos2) {
                ++carta1;
                printf("A carta n° 1 venceu o segundo round com %d pontos turísticos.\n", pontosTuristicos1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                ++carta2;
                printf("A carta n° 2 venceu o segundo round com %d pontos turísticos.\n", pontosTuristicos2);
            } else {
                printf("Empate.\n");
            }
            break;
        case 5:
            if (densidade1 < densidade2) {
                ++carta1;
                printf("A carta n° 1 venceu o segundo round com densidade populacional de %.2f habitantes/km².\n", densidade1);
            } else if (densidade2 < densidade1) {
                ++carta2;
                printf("A carta n° 2 venceu o segundo round com densidade populacional de %.2f habitantes/km².\n", densidade2);
            } else {
                printf("Empate.\n");
            }
            break;
        }
        
    // Resultado final
    if (carta1 > carta2) {
        printf("A carta n° 1 venceu com %d pontos.\n", carta1);
    } else if (carta2 > carta1) {
        printf("A carta n° 2 venceu com %d pontos.\n", carta2);
    } else {
        printf("Empate.\n");
    }

    return 0;
}
