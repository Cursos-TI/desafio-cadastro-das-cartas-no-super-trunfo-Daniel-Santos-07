#include <stdio.h>

int main(){
      char estado[50];
      char codigo[50];
      char nome[50];
      int populacao;
      float area;
      float PIB;
      float media;
      float Media;
      int número;
      int Numero;

      //primeira carta a ser cadastrada

      printf("*** Cadastro da 1ª Carta ***\n\n"); // Frase para apresentar o primeiro cadastro 
  
      printf("Digite o número da carta:");
      scanf("%d", &número);
      printf("Carta: %d\n ", número);

      printf("Digite o estado:");
      scanf("%49s", estado);
      printf("Estado: %s\n", estado);

      printf("Digite o código:");
      scanf("%49s", codigo);
      printf("Código: %s\n", codigo);

      printf("Digite o nome da cidade:");
      scanf("%49[^\n]", nome); // Coloquei %49[^\n] para poder dar espaço nas cidades que possui mais de uma palavra
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

      media = (float) populacao / area; // Pedi para calcular a méida da populão pela area dividindo um a quantidade de populão pelo total de área.

      printf("Densidade Populacional: %f\n", media);

      Media = (float) PIB / populacao; // Pedi para calcular a média do PIB pela população divindo o PIB pela quantidade de pessoas.

      printf("PIB per Capita: %f\n\n", media);

      //informações para adicionar na hora de imprimir a carta

      printf("*** Carta %d ***\n\n ", número); // Apresentação da carta cadastrada para melhor organização.
      
     printf("Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %d habitantes\n Área: %.2f Km²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n\n", estado, codigo, nome, populacao, area, PIB, Numero, media, Media);
       
      //Segunda carta a ser cadastrada

      printf("*** Cadastro da 2ª Carta ***\n\n"); // Frase para apresentar o primeiro cadastro 
  

      printf("Digite o número da carta:");
      scanf("%d", &número);
      printf("Carta: %d\n ", número);

      printf("Digite o estado:");
      scanf("%49s", estado);
      printf("Estado: %s\n", estado);

      printf("Digite o código:");
      scanf("%49s", codigo);
      printf("Código: %s\n", codigo);

      printf("Digite o nome da cidade:");
      scanf(" %49[^\n]", nome); // Coloquei %49[^\n] para poder dar espaço nas cidades que possui mais de uma palavra
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

      media = (float) populacao / area; // Pedi para calcular a méida da populão pela area dividindo um a quantidade de populão pelo total de área.

      printf("Densidade Populacional: %f\n", media);

      Media = (float) PIB / populacao; // Pedi para calcular a média do PIB pela população divindo o PIB pela quantidade de pessoas.

      printf("PIB per Capita: %f\n\n", media);

      //Informações para adicionar na hora de imprimir a carta

      printf("*** Carta %d ***\n\n ", número); // Apresentação da carta cadastrada para melhor organização.

     printf("Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %d habitantes\n Área: %.2f Km²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n\n", estado, codigo, nome, populacao, area, PIB, Numero, media, Media);
      
  
    return 0;
} 
