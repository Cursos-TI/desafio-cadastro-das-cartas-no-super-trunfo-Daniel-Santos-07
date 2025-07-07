#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


     int main(){
      char estado[50];
      char codigo[50];
      char nome[50];
      int populacao;
      float area;
      float PIB;
      int número;
      int Numero;

      //primeira carta a ser cadastrada
      
      printf("Digite o número da carta:");
      scanf("%d", &número);
      printf("Carta: %d\n ", número);

      printf("Digite o estado:");
      scanf("%s", &estado);
      printf("Estado: %s\n", estado);

      printf("Digite o código:");
      scanf("%s", &codigo);
      printf("Código: %s\n", codigo);

      printf("Digite o nome da cidade:");
      scanf("%s", &nome);
      printf("Nome da Cidade: %s\n", nome);

      printf("Digite o número da população:");
      scanf("%d", &populacao);
      printf("População: %d\n", populacao);

      printf("Digite a Area:");
      scanf("%f", &area);
      printf("Area: %f Km²\n", area);

      printf("Digite o PIB:");
      scanf("%f", &PIB);
      printf("PIB: %f Bilhões de reais\n", PIB);

      printf("Digite o número de pontos turísticos:");
      scanf("%d", &Numero);
      printf("Número de Pontos Turísticos: %d\n", Numero);

      //informações para adicionar na hora de imprimir a carta

      printf("Carta: %d\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %d habitantes\n Área: %f Km²\n PIB: %f bilhões de reais\n Número de Pontos Turísticos: %d\n", número, estado, codigo, nome, populacao, area, PIB, Numero );
      
      //Segunda carta a ser cadastrada

      printf("Digite o número da carta:");
      scanf("%d", &número);
      printf("Carta: %d\n ", número);

      printf("Digite o estado:");
      scanf("%s", &estado);
      printf("Estado: %s\n", estado);

      printf("Digite o código:");
      scanf("%s", &codigo);
      printf("Código: %s\n", codigo);

      printf("Digite o nome da cidade:");
      scanf("%s", &nome);
      printf("Nome da Cidade: %s\n", nome);

      printf("Digite o número da população:");
      scanf("%d", &populacao);
      printf("População: %d\n", populacao);

      printf("Digite a Area:");
      scanf("%f", &area);
      printf("Area: %f Km²\n", area);

      printf("Digite o PIB:");
      scanf("%f", &PIB);
      printf("PIB: %f Bilhões de reais\n", PIB);

      printf("Digite o número de pontos turísticos:");
      scanf("%d", &Numero);
      printf("Número de Pontos Turísticos: %d\n", Numero);

      //Informações para adicionar na hora de imprimir a carta

      printf("Carta: %d\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %d habitantes\n Área: %f Km²\n PIB: %f bilhões de reais\n Número de Pontos Turísticos: %d\n", número, estado, codigo, nome, populacao, area, PIB, Numero );
      

    return 0;
}
