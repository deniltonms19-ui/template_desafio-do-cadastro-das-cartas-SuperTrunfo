#include <stdio.h>   // Inclusão da biblioteca padrão de entrada e saída para usar funções como printf e scanf

struct CartaSuperTrunfo {   // Estrutura para representar uma carta do Super Trunfo com os atributos especificados
    char Estado;
    char Codigo_da_Carta[20];
    char Nome_da_Cidade[20];
    int Populacao;
    float Area;
    float PIB;
    int Numero_de_Pontos_Turisticos;
};
void lerCarta(struct CartaSuperTrunfo *carta) {  // Função para ler os dados de uma carta

  printf("\nDigite seu estado de A a H:");
  scanf(" %c", &carta->Estado);

  printf("Digite o codigo da carta:");
  scanf(" %19[^\n]s", carta->Codigo_da_Carta);

  printf("Digite o nome da cidade:");
  scanf(" %19[^\n]s", carta->Nome_da_Cidade);

  printf("Digite a populacao da cidade:");
  scanf("%d", &carta->Populacao);

  printf("Digite a area da cidade:");
  scanf("%f", &carta->Area);

  printf("Digite o PIB da cidade:");
  scanf("%f", &carta->PIB);

  printf("Digite o numero de pontos turisticos da cidade:");
  scanf("%d", &carta->Numero_de_Pontos_Turisticos);
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
   printf("População: %d\n", carta1.Populacao);
   printf("Área: %.2f km²\n", carta1.Area);
   printf("PIB: %.2f bilhões de reais\n", carta1.PIB);
   printf("Número de Pontos Turisticos: %d\n", carta1.Numero_de_Pontos_Turisticos);

   printf("\nCarta 2:");   // Exibe os dados da segunda carta
   printf("\nEstado: %c\n", carta2.Estado);
   printf("Código: %s\n", carta2.Codigo_da_Carta);
   printf("Nome da Cidade: %s\n", carta2.Nome_da_Cidade);
   printf("População: %d\n", carta2.Populacao);
   printf("Área: %.2f km²\n", carta2.Area);
   printf("PIB: %.2f bilhões de reais\n", carta2.PIB);
   printf("Número de Pontos Turisticos: %d\n", carta2.Numero_de_Pontos_Turisticos);

   return 0;
}
