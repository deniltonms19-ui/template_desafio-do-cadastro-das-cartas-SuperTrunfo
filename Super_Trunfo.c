#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigo[20];
  char cidade[20];
  int populacao;
  float area;
  float PIB;
  int numero_de_pontos_turisticos;

  char estado2;
  char codigo2[20];
  char cidade2[20];
  int populacao2;
  float area2;
  float PIB2;
  int numero_de_pontos_turisticos2;


// Área para entrada de dados da 1ª carta

  printf("digite seu Estado:");
  scanf("%c", &estado);

  printf("digite o codigo da cidade:");
  scanf("%s", codigo);

  printf("digite o nome da cidade:");
  scanf("%s", cidade);

  printf("digite a populacao da cidade:");
  scanf("%d", &populacao);

  printf("digite a area da cidade:");
  scanf("%f", &area);

  printf("digite o PIB da cidade:");
  scanf("%f", &PIB);

  printf("digite o numero de pontos turisticos da cidade:");
  scanf("%d", &numero_de_pontos_turisticos);

  // Área para entrada de dados da 2ª carta
  
  printf("\ndigite seu Estado:");
  scanf(" %c", &estado2);

  printf("digite o codigo da cidade:");
  scanf("%s", codigo2);

  printf("digite o nome da cidade:");
  scanf("%s", cidade2);

  printf("digite a populacao da cidade:");
  scanf("%d", &populacao2);

  printf("digite a area da cidade:");
  scanf("%f", &area2);

  printf("digite o PIB da cidade:");
  scanf("%f", &PIB2);

  printf("digite o numero de pontos turisticos da cidade:");
  scanf("%d", &numero_de_pontos_turisticos2);



  // Área para exibição dos dados da cidade
  printf("\ncarta 1:\n");

  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("Populacao: %d\n", populacao);
  printf("Area: %.2f km²\n", area);
  printf("PIB: %.2f bilhôes de reais\n", PIB);
  printf("Numero de pontos turisticos: %d\n", numero_de_pontos_turisticos);

  // Área para exibição dos dados da cidade
  printf("\ncarta 2:\n");

  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f bilhôes de reais\n", PIB2);
  printf("Numero de pontos turisticos: %d\n", numero_de_pontos_turisticos2);

return 0;
} 
