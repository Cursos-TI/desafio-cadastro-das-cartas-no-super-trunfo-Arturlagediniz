#include <stdio.h>
int main() {
    char estado[50] = " ";
    char codigo_da_carta[10] = " ";
    char nome_da_cidade[50] = " ";
    int populacao = 0;        //inicializando as variaveis
    float area = 0;
    float PIB = 0;
    int numero_de_pontos_turisticos = 0;

    printf("Preencha as informacoes sobre a primeira carta\n");
    printf("Estado: ");
    scanf("%s", estado);
    printf("Codigo da carta: ");
    scanf("%s", codigo_da_carta);
    printf("Nome da cidade: ");
    scanf("%s", nome_da_cidade);        //Perguntando ao usuario sobre as informacoes da primeira carta
    printf("Populacao: ");
    scanf(" %d", &populacao);
    printf("Area (km²): ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &PIB);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("\n");

    printf("Primeira carta\n");
    printf("O estado e: %s\n", estado);
    printf("O codigo da carta e: %s\n", codigo_da_carta);
    printf("O nome da cidade e: %s\n", nome_da_cidade);         //imprimindo as informacoes da primeira carta
    printf("O total de populacao e: %d\n", populacao);
    printf("A area total e: %.2f\n", area);
    printf("O PIB total e: %.2f\n", PIB);
    printf("O numero de pontos turisticos e: %d\n", numero_de_pontos_turisticos);
    printf("A densidade populacional e: %.2f habitantes po km²", populacao / area);
    printf("O PIB per capita e: %.2f reais", PIB / populacao);

    printf("\n");

    printf("Preencha as informacoes sobre a segunda carta\n");
    printf("Estado: ");
    scanf("%s", estado);
    printf("Codigo da carta: ");
    scanf("%s", codigo_da_carta);
    printf("Nome da cidade: ");
    scanf("%s", nome_da_cidade);        //Perguntando ao usuario sobre as informacoes da segunda carta
    printf("Populacao: ");
    scanf(" %d", &populacao);
    printf("Area (km²): ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &PIB);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("\n");

    printf("segunda carta\n");
    printf("O estado e: %s\n", estado);
    printf("O codigo da carta e: %s\n", codigo_da_carta);
    printf("O nome da cidade e: %s\n", nome_da_cidade);         //imprimindo as informacoes da segunda carta
    printf("O total de populacao e: %d\n", populacao);
    printf("A area total e: %.2f\n", area);
    printf("O PIB total e: %.2f\n", PIB);
    printf("O numero de pontos turisticos e: %d\n", numero_de_pontos_turisticos);
    printf("A densidade populacional e: %.2f habitantes po km²", populacao / area);
    printf("O PIB per capita e: %.2f reais", PIB / populacao);

    return 0;
}

