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
    int populção2;
    float area2;
    float pib2;
    int número_de_pontos_turísticos2;

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
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade (em R$)\n");
    scanf("%f",&pib);

    printf("DIgite o nemro de pontos turisticos da cidade:\n");
    scanf("%d", &número_de_pontos_turísticos);








    return 0;
}
