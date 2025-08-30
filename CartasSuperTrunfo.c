int main() {

  //Primeira carta

    char estado;

    char codigo_da_carta[4];

    char nome_da_cidade[30];

    int populaçao;

    float area;

    float pib;

    int numero_de_pontos_turisticos;



    //Segunda carta

    char estado2;

    char codigo_da_carta2[4];

    char nome_da_cidade2[30];

    int populaçao2;

    float area2;

    float pib2;

    int numero_de_pontos_turisticos2;



    //Inicio do jogo

    printf("*****SUPER TRUNFO*****\n");



    printf("----- CARTA 1 ----- \n");



    printf("Digite uma letra de 'A' a 'H' para o estado:\n");

    scanf("%c", &estado);



    printf("Digite o código da carta (de 1 a 4):\n");

    scanf("%s", codigo_da_carta);



    printf("Digite o nome da cidade:\n");

    scanf("%s", nome_da_cidade);

   

    printf("Digite a população da cidade:\n");

    scanf("%d", &populaçao);



    printf("Digite a area da cidade (em km²):\n");

    scanf(" %f", &area);

   

    printf("Digite o PIB da cidade (em R$):\n");

    scanf(" %f", &pib);



    printf("DIgite o numero de pontos turisticos da cidade:\n");

    scanf(" %d", &numero_de_pontos_turisticos);



    printf("----- CARTA 2 -----\n");



    printf("Digite uma letra de 'A' a 'H' para o estado:\n");

    scanf(" %c", &estado2);



    printf("Digite o código da carta (de 1 a 4):\n");

    scanf("%s", codigo_da_carta2);



    printf("Digite o nome da cidade:\n");

    scanf("%s", nome_da_cidade2);

   

    printf("Digite a população da cidade:\n");

    scanf("%d", &populaçao2);



    printf("Digite a area da cidade (em km²):\n");

    scanf(" %f", &area2);

   

    printf("Digite o PIB da cidade (em R$):\n");

    scanf(" %f", &pib2);



    printf("DIgite o numero de pontos turisticos da cidade:\n");

    scanf(" %d", &numero_de_pontos_turisticos2);



//Resultado

    printf("---Carta 1---\n");

    printf("Estado: %c\n", estado);

    printf("Código: %s\n", codigo_da_carta);

    printf("Nome da cidade: %s\n", nome_da_cidade);

    printf("População: %i \n", populaçao);

    printf("Área: %.2f Km²\n", area);

    printf("PIB: R$ %.2f bilhões de reais\n",pib);

    printf("Número de pontos turísticos: %i\n", numero_de_pontos_turisticos);



    printf("---Carta 2---\n");

    printf("Estado: %c\n", estado2);

    printf("Código: %s\n", codigo_da_carta2);

    printf("Nome da cidade: %s\n", nome_da_cidade2);

    printf("População: %i \n", populaçao2);

    printf("Área: %.2fKm²\n", area2);

    printf("PIB: R$%.2f bilhões de reais\n",pib2);

    printf("Número de pontos turísticos: %i\n", numero_de_pontos_turisticos2);









    return 0;

 

}