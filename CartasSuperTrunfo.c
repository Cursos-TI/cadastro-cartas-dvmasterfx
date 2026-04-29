#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char state1[20],state2[20],cardCode1[3],cardCode2[3],cityName1[20],cityName2[20];
  int population1,population2,touristPoints1,touristPoints2;
  float area1,area2,pib1,pib2;

  // Área para entrada de dados
  // Capta os dados da carta 1
  printf("Insira os dados da carta 1:\n");
  printf("Digite o estado:\n");
  scanf("%s",&state1);
  printf("Digite o código da carta:\n");
  scanf("%s",&cardCode1);
  printf("Digite a cidade:\n");
  scanf("%s",&cityName1);
  printf("Digite a população:\n");
  scanf("%d",&population1);
  printf("Digite a área:\n");
  scanf("%f",&area1);
  printf("Digite o PIB:\n");
  scanf("%f",&pib1);
  printf("Digite a quantidade de pontos turísticos:");
  scanf("%d",&touristPoints1);
  
  // Capta os dados da Carta 2
  printf("Insira os dados da carta 2:\n");
  printf("Digite o estado:\n");
  scanf("%s",&state2);
  printf("Digite o código da carta:\n");
  scanf("%s",&cardCode2);
  printf("Digite a cidade:\n");
  scanf("%s",&cityName2);
  printf("Digite a população:\n");
  scanf("%d",&population2);
  printf("Digite a área:\n");
  scanf("%f",&area2);
  printf("Digite o PIB:\n");
  scanf("%f",&pib2);
  printf("Digite a quantidade de pontos turísticos:");
  scanf("%d",&touristPoints2);

  // Área para exibição dos dados da cidade
  // Imprime dados da Carta 1
  printf("Carta 1\n");
  printf("Código da Carta: %s\n",cardCode1);
  printf("Estado: %s\n",state1);
  printf("Cidade: %s\n",cityName1);
  printf("População: %d\n",population1);
  printf("Área em Km2: %f\n",area1);
  printf("PIB local: %f\n",pib1);
  printf("Total de Pontos Turísticos: %d\n",touristPoints1);
  // Imprime os dados da Carta 2
  printf("Carta 2\n");
  printf("Código da Carta: %s\n",cardCode2);
  printf("Estado: %s\n",state2);
  printf("Cidade: %s\n",cityName2);
  printf("População: %d\n",population2);
  printf("Área em Km2: %f\n",area2);
  printf("PIB local: %f\n",pib2);
  printf("Total de Pontos Turísticos: %d\n",touristPoints2);
return 0;
} 
