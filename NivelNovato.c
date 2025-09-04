#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
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






    return 0;
}
