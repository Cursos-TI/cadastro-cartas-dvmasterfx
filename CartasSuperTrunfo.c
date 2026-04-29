
#include <stdio.h>

// Protótipo da função de limpeza do buffer
void limparBuffer() {
    int c;
    // Este loop consome e descarta todos os caracteres restantes no buffer
    while ((c = getchar()) != '\n' && c != EOF);
}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char state1[20], state2[20];
  char cardCode1[3], cardCode2[3];
  char cityName1[20], cityName2[20];
  
  int population1, population2;
  int touristPoints1, touristPoints2;
  
  // Usamos float para área e PIB, pois são valores decimais
  float area1, area2;
  float pib1, pib2;

  // =======================================================
  // Área para entrada de dados - Carta 1
  // =======================================================
  printf("=========================================\n");
  printf("      Cadastro da Carta 1 (Dados da Cidade 1)\n");
  printf("=========================================\n");
  
  printf("Digite o estado: ");

  scanf("%s", state1);
  limparBuffer(); 
  
  printf("Digite o código da carta (ex: ABC): ");
  scanf("%s", cardCode1);
  limparBuffer(); 
  
  printf("Digite a cidade: ");
  scanf("%s", cityName1);
  limparBuffer(); 
  
  printf("Digite a população: ");
  scanf("%d", &population1);
  limparBuffer(); 
  
  printf("Digite a área (Km2): ");
  scanf("%f", &area1);
  limparBuffer(); 
  
  printf("Digite o PIB (valor monetário): ");
  scanf("%f", &pib1);
  limparBuffer(); 
  
  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%d", &touristPoints1);
  limparBuffer(); 
  
  printf("\n");

  // =======================================================
  // Área para entrada de dados - Carta 2
  // =======================================================
  printf("=========================================\n");
  printf("      Cadastro da Carta 2 (Dados da Cidade 2)\n");
  printf("=========================================\n");
  
  printf("Digite o estado: ");

  scanf("%s", state2);
  limparBuffer(); 

  printf("Digite o código da carta (ex: XYZ): ");
  scanf("%s", cardCode2);
  limparBuffer(); 

  printf("Digite a cidade: ");
  scanf("%s", cityName2);
  limparBuffer(); 

  printf("Digite a população: ");
  scanf("%d", &population2);
  limparBuffer(); 

  printf("Digite a área (Km2): ");
  scanf("%f", &area2);
  limparBuffer(); 

  printf("Digite o PIB (valor monetário): ");
  scanf("%f", &pib2);
  limparBuffer(); 

  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%d", &touristPoints2);
  limparBuffer(); 
  
  printf("\n\n=========================================\n");
  printf("          DADOS CADASTRADOS COM SUCESSO\n");
  printf("=========================================\n\n");


  // =======================================================
  // Área para exibição dos dados da cidade
  // =======================================================
  
  // Imprime dados da Carta 1
  printf("--- Carta 1 ---\n");
  printf("Código da Carta: %s\n", cardCode1);
  printf("Estado: %s\n", state1);
  printf("Cidade: %s\n", cityName1);
  printf("População: %d\n", population1);
  printf("Área em Km2: %.2f\n", area1);
  printf("PIB local: R$ %.2f\n", pib1);
  printf("Total de Pontos Turísticos: %d\n", touristPoints1);
  
  printf("\n");
  
  // Imprime os dados da Carta 2
  printf("--- Carta 2 ---\n");
  printf("Código da Carta: %s\n", cardCode2);
  printf("Estado: %s\n", state2);
  printf("Cidade: %s\n", cityName2);
  printf("População: %d\n", population2);
  printf("Área em Km2: %.2f\n", area2);
  printf("PIB local: R$ %.2f\n", pib2);
  printf("Total de Pontos Turísticos: %d\n", touristPoints2);
  
  return 0;
}
