#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado01;
  char codigo_carta01[2];
  char nome_cidade01[50];
  int populacao_cidade01;
  float area_cidade01;
  float pib_cidade01;
  int numero_pontos_cidade01;
  
  // Área para entrada de dados
  printf("Digite o nome do estado 01: ");
  scanf("%c", &estado01);

  printf("Digite o codigo da carta 01: ");
  scanf("%s", codigo_carta01);

  printf("Digite o nome da cidade 01: ");  
  scanf("%s", nome_cidade01);

  printf("Digite a populacao da cidade 01: ");
  scanf("%d", &populacao_cidade01);
  
  printf("Digite a area da cidade 01: ");
  scanf("%f", &area_cidade01);
  
  printf("Digite o PIB da cidade 01: ");
  scanf("%f", &pib_cidade01);
  
  printf("Digite o numero de pontos da cidade 01: ");
  scanf("%d", &numero_pontos_cidade01);
  
  char estado02;
  char codigo_carta02[2];
  char nome_cidade02[50];
  int populacao_cidade02;
  float area_cidade02;
  float pib_cidade02;
  int numero_pontos_cidade02;
  
  // limpar o terminal para entrada dos dados da segunda cidade
  system("cls");

  // Área para exibição dos dados da cidade

  printf("Estado: %c \n", estado01);
  printf("Codigo da carta: %s\n", codigo_carta01); 
  printf("Nome da cidade: %s\n", nome_cidade01);
  printf("Populacao: %d\n", populacao_cidade01);
  printf("area: %.2f\n", area_cidade01);
  printf("PIB: %.2f\n", pib_cidade01);
  printf("Numero de pontos: %d\n", numero_pontos_cidade01);

  // teste alteração 
  return 0;

  
} 



// Acre (AC) Alagoas (AL)Amapá (AP)Amazonas (AM)Bahia (BA)Ceará (CE)Distrito Federal (DF)Espírito Santo (ES)