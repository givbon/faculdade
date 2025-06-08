#include <stdio.h>

int main() {
    /* CARTA 1 */
    char estado1[2];           
    char codigo1[4];           
    char cidade1[50];          
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    /* CARTA 2 */
    char estado2[2];           
    char codigo2[4];           
    char cidade2[50];          
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    
    

    printf("Criando a carta n° 1\n");

    /* Estado */
    printf("Digite o nome do primeiro estado (apenas uma letra, ex: A): ");
    scanf("%1s", estado1);

    /* Código */
    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", codigo1);
    getchar(); // Limpar o buffer do teclado após a leitura anterior

    /* Cidade */
    printf("Digite o nome da primeira cidade: ");
    scanf("%[^\n]", cidade1);

    /* População */
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    /* Área */
    printf("Digite a área da cidade em Km²: ");
    scanf("%f", &area1);

    /* PIB */
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    /* Pontos turísticos */
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicos1);



    
    printf("Criando a carta n° 2\n");

    /* Estado */
    printf("Digite o nome do segundo estado (apenas uma letra, ex: A): ");
    scanf("%1s", estado2);

    /* Código */
    printf("Digite o código da carta (ex: A02): ");
    scanf("%3s", codigo2);
    getchar(); // Limpar o buffer do teclado após a leitura anterior

    /* Cidade */
    printf("Digite o nome da segunda cidade: ");
    scanf("%[^\n]", cidade2);
    getchar();

    /* População */
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    /* Área */
    printf("Digite a área da cidade em Km²: ");
    scanf("%f", &area2);

    /* PIB */
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    /* Pontos turísticos */
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicos2);

    
    /* Cálculos de densidade populacional e PIB per capita */
    float densidade1 = populacao1/area1;
    float pibPerCapita1 = pib1/populacao1;
    float densidade2 = populacao2/area2;
    float pibPerCapita2 = pib2/populacao2;

        /* Mostrar os dados */
    printf("\nDados da Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\nDensidade populacional: %d habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

        printf("\nDados da Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    printf("\nDensidade populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    return 0;
}
