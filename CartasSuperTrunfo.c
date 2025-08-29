#include <stdio.h>


int main() {
  //Primeira carta
    char estado;
    char codigo_da_carta[3];
    char nome_da_cidade[30];
    int população;
    float area;
    float pib;
    int número_de_pontos_turísticos;

    //Segunda carta
    char estado2;
    char codigo_da_carta2[3];
    char nome_da_cidade2[30];
    int população2;
    float area2;
    float pib2;
    int número_de_pontos_turísticos2;

    //Inicio do jogo 
    printf("*****SUPER TRUNFO*****\n");

    printf("----- CARTA 1 ----- \n");

    printf("Digite uma letra de 'A' a 'H' para o estado:\n");
    scanf("%c", &estado);

    printf("Digite o código da carta (de 1 a 4):\n");
    scanf("%s", &codigo_da_carta);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_da_cidade);
    
    printf("Digite a população da cidade:\n");
    scanf("%d", &população);

    printf("Digite a area da cidade (em km²):\n");
    scanf(" %f", &area);
    
    printf("Digite o PIB da cidade (em R$):\n");
    scanf(" %f", &pib);

    printf("DIgite o numero de pontos turisticos da cidade:\n");
    scanf(" %d", &número_de_pontos_turísticos);

    printf("----- CARTA 2 -----\n");

    printf("Digite uma letra de 'A' a 'H' para o estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (de 1 a 4):\n");
    scanf("%s", &codigo_da_carta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_da_cidade2);
    
    printf("Digite a população da cidade:\n");
    scanf("%d", &população2);

    printf("Digite a area da cidade (em km²):\n");
    scanf(" %f", &area2);
    
    printf("Digite o PIB da cidade (em R$):\n");
    scanf(" %f", &pib2);

    printf("DIgite o numero de pontos turisticos da cidade:\n");
    scanf(" %d", &número_de_pontos_turísticos2);

//Resultado
    printf("---Carta 1---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %i \n", população);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: R$ %.2f bilhões de reais\n",pib);
    printf("Número de pontos turísticos: %i\n", número_de_pontos_turísticos);

    printf("---Carta 2---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %i \n", população2);
    printf("Área: %.2fKm²\n", area2);
    printf("PIB: R$%.2f bilhões de reais\n",pib2);
    printf("Número de pontos turísticos: %i\n", número_de_pontos_turísticos2);




    return 0;
  
}
