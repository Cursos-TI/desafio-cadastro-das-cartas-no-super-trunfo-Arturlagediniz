#include <stdio.h>
int main() {
    char estado1[50] = " ";
    char codigo_da_carta1[10] = " ";
    char nome_da_cidade1[50] = " ";
    unsigned long int populacao1 = 0;        //inicializando as variaveis
    float area1 = 0;
    float PIB1 = 0;
    int numero_de_pontos_turisticos1 = 0;

    char estado2[50] = " ";
    char codigo_da_carta2[10] = " ";
    char nome_da_cidade2[50] = " ";
    unsigned long int populacao2 = 0;        //inicializando as variaveis
    float area2 = 0;
    float PIB2 = 0;
    int numero_de_pontos_turisticos2 = 0;

    printf("Preencha as informacoes sobre a primeira carta\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Codigo da carta: ");
    scanf("%s", codigo_da_carta1);
    printf("Nome da cidade: ");
    scanf("%s", nome_da_cidade1);        //Perguntando ao usuario sobre as informacoes da primeira carta
    printf("Populacao: ");
    scanf(" %lu", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &PIB1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &numero_de_pontos_turisticos1);

    printf("\n");

    printf("Preencha as informacoes sobre a segunda carta\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Codigo da carta: ");
    scanf("%s", codigo_da_carta2);
    printf("Nome da cidade: ");
    scanf("%s", nome_da_cidade2);        //Perguntando ao usuario sobre as informacoes da segunda carta
    printf("Populacao: ");
    scanf(" %lu", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);
    
    printf("\n");

    float PIBpercapta1 = (float) populacao1 / PIB1;
    float densidadepopulacional1 = (float) area1 / populacao1;           //calculos da carta 1
    float superpoder1 = (float) populacao1 + area1 + PIB1 + numero_de_pontos_turisticos1 + PIBpercapta1 - densidadepopulacional1;

    float PIBpercapta2 = (float) populacao2 / PIB2;
    float densidadepopulacional2 = (float) area2 / populacao2;          //calculos da carta 2
    float superpoder2 = (float) populacao2 + area2 + PIB2 + numero_de_pontos_turisticos2 + PIBpercapta2 - densidadepopulacional2;



    printf("Comparando as cartas\n");

    printf("primeira carta /// segundacarta\n");
    printf("%15.2f   %.2f\n", area1, area2);
    printf("%15.2f   %.2f\n", PIB1, PIB2);
    printf("%15.d   %d\n", numero_de_pontos_turisticos1, numero_de_pontos_turisticos2);
    printf("%15.2f   %.2f\n", PIBpercapta1, PIBpercapta2);
    printf("%15.2f   %.2f\n", densidadepopulacional1, densidadepopulacional2);
    printf("%15.2f   %.2f\n", superpoder1, superpoder2);
   


    return 0;
}

