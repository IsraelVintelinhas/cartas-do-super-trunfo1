
#include <stdio.h>
#include <string.h>

int main (void) {
    // primeira variaveis de cartas
    char estado;
    char codigo[40];
    char cidade[40];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidade;
    float pibpercapita;
    float superpoder;

    // Segunda variaveis de cartas
    char estado2;
    char codigo2[40];
    char cidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float pibpercapita2;
    float superpoder2;

    // Entrada de dados da Primeira carta
    printf("Digite a letra do Estado da primeira carta: \n");
    scanf(" %c", &estado); // O Espaço antes do %c serve para ignorar '\n'

    getchar(); // limpa o '\n' deixado pelo scanf antes do fgets
    printf("Digite o codigo da primeira carta: \n");
    fgets(codigo, 40, stdin);
    // remove o '\n' armazenado do fgets
    codigo[strcspn(codigo, "\n")] = '\0';

    printf("Digite o nome da cidade da primeira carta: \n");
    fgets(cidade, 40, stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Digite o número da população da cidade da primeira carta: \n");
    scanf(" %i", &populacao);

    printf("Digite a área da cidade em km quadrados da primeira carta: \n");
    scanf(" %f", &area);

    printf("Digite o Produto Bruto da cidade(PIB) da primeira carta: \n");
    scanf(" %f", &pib);

    printf("Digite o Número de Pontos Turísticos da primeira carta: \n");
    scanf(" %i", &pontosturisticos);

    //Calculo da PIB per Capita/Densidade Populacional da primeira carta
    densidade= (float) populacao/area;
    pibpercapita= (float) pib/populacao;
    float inversodensidade= (float) 1/densidade;
    superpoder= (float) populacao+area+pib+pontosturisticos+pibpercapita+inversodensidade;

    // Entrada de dados da Segunda carta
    printf("Digite a letra do Estado da segunda carta: \n");
    scanf(" %c", &estado2);

    getchar(); // limpeza de novo
    printf("Digite o codigo da carta da segunda carta: \n");
    fgets(codigo2,40,stdin);
    codigo2[strcspn(codigo2, "\n")]='\0';

    printf("Digite o nome da cidade da segunda carta: \n");
    fgets(cidade2,40,stdin);
    cidade2[strcspn(cidade2, "\n")]='\0';

    printf("Digite o número da população da cidade da segunda carta: \n");
    scanf(" %i", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados da segunda carta: \n");
    scanf(" %f", &area2);

    printf("Digite o Produto Bruto da cidade(PIB) da segunda carta: \n");
    scanf(" %f", &pib2);

    printf("Digite o Número de Pontos Turísticos da segunda carta: \n");
    scanf(" %i", &pontosturisticos2);

    //Calculo da PIB per Capita/Densidade Populacional da segunda carta
    densidade2= (float) populacao2/area2;
    pibpercapita2= (float) pib2/populacao2;
    float inversodensidade2= (float) 1/densidade2;
    superpoder2= (float) populacao2+area2+pib2+pontosturisticos2+pibpercapita2+inversodensidade2;

    // Área de exibição da primeira carta
    printf("\n===== PRIMEIRA CARTA =====\n");
    printf("Estado: %c\n",estado);
    printf("Código: %s\n",codigo);
    printf("Nome da Cidade: %s\n",cidade);
    printf("População: %i\n",populacao);
    printf("Área: %.2f km²\n",area);
    printf("PIB: %.2f\n",pib);
    printf("Número de Pontos Turísticos: %i\n",pontosturisticos);
    printf("Densidade Populacional: %.2f Hab/km²\n", densidade);
    printf("PIB per Capita: %.2f Reais\n", pibpercapita);
    printf("Super poder: %.2f",superpoder );

    // Área de exibição da segundo carta
    printf("\n===== SEGUNDA CARTA =====\n");
    printf("Estado: %c\n",estado2);
    printf("Código: %s\n",codigo2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("População: %i\n",populacao2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB: %.2f\n",pib2);
    printf("Número de Pontos Turísticos: %i\n",pontosturisticos2);
    printf("Densidade Populacional: %.2f Hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f Reais\n", pibpercapita2);
    printf("Super poder: %.2f",superpoder2 );

    // Área de exibição do vencedor
    printf("\n====== Comparação das Cartas ======\n");

    //população das cartas
    printf("População: %i\n",populacao);
    printf("População: %i\n",populacao2);
    if (populacao>populacao2) {
        printf("Resultado: Carta 1 %s venceu!\n",cidade);
    }
    else {
        printf("Resultado: Carta 2 %s venceu!\n",cidade2);
    }

    //Area
    printf("Área: %.2f km²\n",area);
    printf("Área: %.2f km²\n",area2);
    if (area>area2) {
        printf("Resultado: Carta 1 %s venceu!\n",cidade);
    }
    else {
        printf("Resultado: Carta 2 %s venceu!\n",cidade2);
    }

    //Pib
    printf("PIB: %.2f\n",pib);
    printf("PIB: %.2f\n",pib2);
    if (pib>pib2) {
        printf("Resultado: Carta 1 %s venceu!\n",cidade);
    }
    else {
        printf("Resultado: Carta 2 %s venceu!\n",cidade2);
    }

    //pontos turisticos
    printf("Número de Pontos Turísticos: %i\n",pontosturisticos);
    printf("Número de Pontos Turísticos: %i\n",pontosturisticos2);
    if (pontosturisticos>pontosturisticos2) {
        printf("Resultado: Carta 1 %s venceu!\n",cidade);
    }
    else {
        printf("Resultado: Carta 2 %s venceu!\n",cidade2);
    }

    //densidade populacional
    printf("Densidade Populacional: %.2f Hab/km²\n", densidade);
    printf("Densidade Populacional: %.2f Hab/km²\n", densidade2);
    if (densidade<densidade2) {
        printf("Resultado: Carta 1 %s venceu!\n",cidade);
    }
    else {
        printf("Resultado: Carta 2 %s venceu!\n",cidade2);
    }

    //pib per capita
    printf("PIB per Capita: %.2f Reais\n", pibpercapita);
    printf("PIB per Capita: %.2f Reais\n", pibpercapita2);
    if (pibpercapita>pibpercapita2) {
        printf("Resultado: Carta 1 %s venceu!\n",cidade);
    }
    else {
        printf("Resultado: Carta 2 %s venceu!\n",cidade2);
    }

    //super poder
    printf("Super poder: %.2f\n", superpoder);
    printf("Super poder: %.2f\n", superpoder2);
    if (superpoder>superpoder2) {
        printf("Resultado: Carta 1 %s venceu!\n",cidade);
    }
    else{
        printf("Resultado: Carta 2 %s venceu!\n",cidade2);
    }
    return 0;
}
