#include <stdio.h>   // Inclusão da biblioteca padrão de entrada e saída para usar funções como printf e scanf

struct CartaSuperTrunfo {   // Estrutura para representar uma carta do Super Trunfo com os atributos especificados
    char Estado;
    char Codigo_da_Carta[20];
    char Nome_da_Cidade[20];
    unsigned long int Populacao;
    float Area;
    float PIB;
    int Numero_de_Pontos_Turisticos;
    float densidade_populacional;  // Atributo adicional para calcular a densidade populacional da cidade
    float pib_per_capita;  // Atributo adicional para calcular o PIB per capita da cidade
    float super_poder;  // Atributo adicional para calcular o super poder da carta com base em seus atributos
};
void lerCarta(struct CartaSuperTrunfo *carta) {  // Função para ler os dados de uma carta

  printf("\nDigite seu estado de A a H:");
  scanf(" %c", &carta->Estado);

  printf("Digite o codigo da carta:");
  scanf(" %19[^\n]s", carta->Codigo_da_Carta);

  printf("Digite o nome da cidade:");
  scanf(" %19[^\n]s", carta->Nome_da_Cidade);

  printf("Digite a populacao da cidade:");
  scanf("%lu", &carta->Populacao);

  printf("Digite a area da cidade:");
  scanf("%f", &carta->Area);

  printf("Digite o PIB da cidade:");
  scanf("%f", &carta->PIB);

  printf("Digite o numero de pontos turisticos da cidade:");
  scanf("%d", &carta->Numero_de_Pontos_Turisticos);

  // Cálculo da densidade populacional e do PIB per capita
  carta->densidade_populacional = carta->Populacao / carta->Area;
  carta->pib_per_capita = carta->PIB / carta->Populacao;

  // Cálculo do super poder da carta com base na densidade populacional e no PIB per capita
  carta->super_poder = carta->Populacao+carta->Area+carta->PIB+carta->Numero_de_Pontos_Turisticos+carta->densidade_populacional+carta->pib_per_capita;
}

int main() {   // Função principal para testar a leitura e exibição dos dados das cartas

struct CartaSuperTrunfo carta1, carta2;  // Declaração de duas cartas do Super Trunfo

   printf("\nInsira os dados da primeira carta:\n");  // Solicita ao usuário que insira os dados da primeira carta
   lerCarta(&carta1);

   printf("\nInsira os dados da segunda carta:\n");  // Solicita ao usuário que insira os dados da segunda carta
   lerCarta(&carta2);

   printf("\nCarta 1:");    // Exibe os dados da primeira carta
   printf("\nEstado: %c\n", carta1.Estado);
   printf("Código: %s\n", carta1.Codigo_da_Carta);
   printf("Nome da Cidade: %s\n", carta1.Nome_da_Cidade);
   printf("População: %lu\n", carta1.Populacao);
   printf("Área: %.2f km²\n", carta1.Area);
   printf("PIB: %.2f bilhões de reais\n", carta1.PIB);
   printf("Número de Pontos Turisticos: %d\n", carta1.Numero_de_Pontos_Turisticos);
   printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
   printf("PIB per Capita: %.2f reais\n", carta1.pib_per_capita);
   printf("Super Poder: %.2f\n", carta1.super_poder);

   printf("\nCarta 2:");   // Exibe os dados da segunda carta
   printf("\nEstado: %c\n", carta2.Estado);
   printf("Código: %s\n", carta2.Codigo_da_Carta);
   printf("Nome da Cidade: %s\n", carta2.Nome_da_Cidade);
   printf("População: %lu\n", carta2.Populacao);
   printf("Área: %.2f km²\n", carta2.Area);
   printf("PIB: %.2f bilhões de reais\n", carta2.PIB);
   printf("Número de Pontos Turisticos: %d\n", carta2.Numero_de_Pontos_Turisticos);
   printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
   printf("PIB per Capita: %.2f reais\n", carta2.pib_per_capita);
   printf("Super Poder: %.2f\n", carta2.super_poder);
  
   // Comparação entre as cartas com base no super poder

   printf("\nComparação entre as cartas com base no Super Poder:\n");
   printf("\nPopulação: Carta 1 venceu (%d)\n", carta1.Populacao > carta2.Populacao ? 1 : 0);
   printf("Área: Carta 1 venceu (%d)\n", carta1.Area > carta2.Area ? 1 : 0);
   printf("PIB: Carta 1 venceu (%d)\n", carta1.PIB > carta2.PIB ? 1 : 0);
   printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.Numero_de_Pontos_Turisticos > carta2.Numero_de_Pontos_Turisticos ? 1 : 0);
   printf("Densidade Populacional: Carta 2 venceu (%d)\n", carta1.densidade_populacional > carta2.densidade_populacional ? 0 : 1); // Menor densidade vence
   printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1.pib_per_capita > carta2.pib_per_capita ? 1 : 0);
   printf("Super Poder: Carta 1 venceu (%d)\n", carta1.super_poder > carta2.super_poder ? 1 : 0);
   
   return 0;
}
