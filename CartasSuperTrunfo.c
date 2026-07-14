#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado01[20];
  char codigo_carta01[4];
  char nome_cidade01[50];
  int populacao_cidade01;
  float area_cidade01;
  float pib_cidade01;
  int numero_pontos_cidade01;
  
  // Área para entrada de dados
  printf("Digite o nome do estado 01:\n");
  scanf("%19s", estado01);

  printf("digite o codigo da carta 01:\n");
  scanf("%3s", codigo_carta01);
  
  printf("Digite o nome da cidade 01: \n");  
  scanf("%49s", nome_cidade01);
  
  printf("Digite a populacao da cidade 01: \n");
  scanf("%d", &populacao_cidade01);
  
  printf("Digite a area da cidade 01: \n");
  scanf("%f", &area_cidade01);
  
  printf("Digite o PIB da cidade 01: \n");
  scanf("%f", &pib_cidade01);
  
  printf("Digite o numero de pontos da cidade 01: \n");
  scanf("%d", &numero_pontos_cidade01);

  system("cls");
  
  char estado02[20];
  char codigo_carta02[4];
  char nome_cidade02[50];
  int populacao_cidade02;
  float area_cidade02;
  float pib_cidade02;
  int numero_pontos_cidade02;
  
  // limpar o terminal para entrada dos dados da segunda cidade
  printf("digite o nome do estado 02: \n");
  scanf("%19s", estado02);

  printf("digite o codigo da carta 02: \n");
  scanf("%3s", codigo_carta02);
  
  printf("digite o nome da cidade 02: \n");
  scanf("%49s", nome_cidade02);
  
  printf("digite a populacao da cidade 02: \n");
  scanf("%d", &populacao_cidade02);
  
  printf("digite a area da cidade 02: \n");
  scanf("%f", &area_cidade02);
  
  printf("digite o pib da cidade 02: \n");
  scanf("%f", &pib_cidade02);
  
  printf("digite o numero de pontos da cidade 02: \n");
  scanf("%d", &numero_pontos_cidade02);

  system("cls");

  // Área para exibição dos dados da cidade

  printf("Estado: %s \n", estado01);
  printf("Codigo da carta: %s \n", codigo_carta01); 
  printf("Nome da cidade: %s \n", nome_cidade01);
  printf("Populacao: %d \n", populacao_cidade01);
  printf("area: %.2f \n", area_cidade01);
  printf("PIB: %.2f \n", pib_cidade01);
  printf("Numero de pontos: %d \n", numero_pontos_cidade01);

  printf("\n");
  printf("----------------------------------------------------\n");
  printf("\n");  

  printf("Estado: %s \n", estado02);
  printf("Codigo da carta: %s \n", codigo_carta02); 
  printf("Nome da cidade: %s \n", nome_cidade02);
  printf("Populacao: %d \n", populacao_cidade02);
  printf("area: %.2f \n", area_cidade02);
  printf("PIB: %.2f \n", pib_cidade02);
  printf("Numero de pontos: %d \n", numero_pontos_cidade02);

  system("pause");
  // teste alteração 
  return 0;

  
} 



// Acre (AC) Alagoas (AL)Amapá (AP)Amazonas (AM)Bahia (BA)Ceará (CE)Distrito Federal (DF)Espírito Santo (ES)