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


// Área para entrada de dados

  printf("digite seu Estado: \n");
  scanf("%c", &estado);

  printf("digite o codigo da cidade: \n");
  scanf("%s", codigo);

  printf("digite o nome da cidade: \n");
  scanf("%s", cidade);

  printf("digite a populacao da cidade: \n");
  scanf("%d", &populacao);

  printf("digite a area da cidade: \n");
  scanf("%f", &area);

  printf("digite o PIB da cidade: \n");
  scanf("%f", &PIB);

  printf("digite o numero de pontos turisticos da cidade: \n");
  scanf("%d", &numero_de_pontos_turisticos);
  

  // Área para exibição dos dados da cidade
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("Populacao: %d\n", populacao);
  printf("Area: %.2f\n", area);
  printf("PIB: %.2f\n", PIB);
  printf("Numero de pontos turisticos: %d\n", numero_de_pontos_turisticos);

return 0;
} 
