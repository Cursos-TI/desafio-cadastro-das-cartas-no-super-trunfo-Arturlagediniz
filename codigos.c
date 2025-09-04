char estado1[50] = " ";
    char codigo_da_carta1[10] = " ";
    char nome_da_cidade1[50] = " ";
    unsigned long int populacao1 = 0;        //inicializando as variaveis
    float area1 = 0;
    float PIB1 = 0;
    int numero_de_pontos_turisticos1 = 0;
    float PIBpercapta1 = 0;
    float desidadepopulacional1 = 0;

    printf("Primeira carta\n");
    printf("O estado e: %s\n", estado1);
    printf("O codigo da carta e: %s\n", codigo_da_carta1);
    printf("O nome da cidade e: %s\n", nome_da_cidade1);         //imprimindo as informacoes da primeira carta
    printf("O total de populacao e: %d\n", populacao1);
    printf("A area total e: %.2f\n", area1);
    printf("O PIB total e: %.2f\n", PIB1);
    printf("O numero de pontos turisticos e: %d\n", numero_de_pontos_turisticos1);
    printf("A densidade populacional e: %.2f habitantes po km²", populacao1 / area1);
    printf("O PIB per capita e: %.2f reais", PIB1 / populacao1);
    printf("O Super Poder e: %.2f", superpoder1)