#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1, estado2;
  int Codigo_Da_Carta1, Codigo_Da_Carta2; 
  char Nome_da_Cidade1[50], Nome_da_Cidade2[50];
  int Populacao1, Populacao2;
  int Numero_De_Pontos_Turisticos1, Numero_De_Pontos_Turisticos2;
  float Area1, Pib1, Area2, Pib2;
  // Área para entrada de dados
  printf("Bem vindo ao Desafio Super Trunfo Paises!\n");
  printf("Vamos comecar, digitando, a primeira Carta: digite a letra que correspondera a um de oito estados.\n");
  printf("Qual e a letra do seu Estado?\n");
  scanf("%c", &estado1);
  printf("Digite o codigo da carta. Esse codigo pode ser de 01 a 04\n");
  scanf("%d", &Codigo_Da_Carta1);
  printf("Agora digite o nome da cidade\n");
  scanf(" %[^\n]", Nome_da_Cidade1);
  printf("Agora digite o valor correspondente ao tamanho da populacao da sua cidade(sem colocar pontos.):\n");
  scanf("%d", &Populacao1);
  printf("Qual e a area da cidade em quilometro quadrados\n");
  scanf("%f", &Area1);
  printf("Digite por favor o valor do PIB:\n");
  scanf("%f", &Pib1);
  printf("Para finalizar, digite a quantidade de numeros turisticos a sua cidade tem:\n");
  scanf("%d", &Numero_De_Pontos_Turisticos1);

  // Área para exibição dos dados da cidade
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %c0%d\n",estado1, Codigo_Da_Carta1);
  printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
  printf("Populacao: %d\n", Populacao1);
  printf("Area: %f\n Km2", Area1);
  printf("PIB: %f bilhoes de reais\n", Pib1);
  printf("Numero de Pontos Turisticos: %d\n", Numero_De_Pontos_Turisticos1);

  printf("Vamos digitar a segunda Carta: digite a letra que correspondera a um de oito estados.\n");
  printf("Qual e a letra do seu Estado?\n");
  scanf("%c", &estado2);
  printf("Digite o codigo da carta. Esse codigo pode ser de 01 a 04\n");
  scanf("%d", &Codigo_Da_Carta2);
  printf("Agora digite o nome da cidade\n");
  scanf(" %[^\n]", Nome_da_Cidade2);
  printf("Agora digite o valor correspondente ao tamanho da populacao da sua cidade(sem colocar pontos.):\n");
  scanf("%d", &Populacao2);
  printf("Qual e a area da cidade em quilometro quadrados\n");
  scanf("%f", &Area2);
  printf("Digite por favor o valor do PIB:\n");
  scanf("%f", &Pib2);
  printf("Para finalizar, digite a quantidade de numeros turisticos a sua cidade tem:\n");
  scanf("%d", &Numero_De_Pontos_Turisticos2);

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %c0%d\n",estado2, Codigo_Da_Carta2);
  printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
  printf("Populacao: %d\n", Populacao2);
  printf("Area: %f Km2\n", Area2);
  printf("PIB: %f bilhoes de reais\n", Pib2);
  printf("Numero de Pontos Turisticos: %d\n", Numero_De_Pontos_Turisticos2);



return 0;
} 
