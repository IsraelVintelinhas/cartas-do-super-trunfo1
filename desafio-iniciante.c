
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


    return 0;
}
