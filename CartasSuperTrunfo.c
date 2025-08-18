#include <stdio.h>

int main(){
      char estado[50];
      char codigo[50];
      char nome[50];
      unsigned long int populacao;
      float area;
      float PIB;
      float DensidadePopulacional;
      float PIBPerCapita;
      int numero;
      int numeropontosturisticos;

      char estado2[50];
      char codigo2[50];
      char nome2[50];
      unsigned long int populacao2;
      float area2;
      float PIB2;
      float DensidadePopulacional2;
      float PIBPerCapita2;
      float superPoder;
      float superPoder2;
      int numero2;
      int numeropontosturisticos2;

      //primeira carta a ser cadastrada

      printf("*** Cadastro da 1ª Carta ***\n\n"); // Frase para apresentar o primeiro cadastro 
  
      printf("Digite o número da carta:");
      scanf("%d", &numero);
      printf("Carta: %d\n ", numero);

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
      scanf("%lu", &populacao);
      printf("População: %lu\n", populacao);

      printf("Digite a Area:");
      scanf("%f", &area);
      printf("Area: %f Km²\n", area);

      printf("Digite o PIB:");
      scanf("%f", &PIB);
      printf("PIB: %f Bilhões de reais\n", PIB);


      printf("Digite o número de pontos turísticos:");
      scanf("%d", &numeropontosturisticos);
      printf("Número de Pontos Turísticos: %d\n", numeropontosturisticos);

      DensidadePopulacional = (float) populacao / area; // Pedi para calcular a méida da populão pela area dividindo um a quantidade de populão pelo total de área.

      printf("Densidade Populacional: %.2f\n", DensidadePopulacional);

      PIBPerCapita = (float) PIB / populacao; // Pedi para calcular a média do PIB pela população divindo o PIB pela quantidade de pessoas.

      printf("PIB per Capita: %.2f\n\n", PIBPerCapita);

      superPoder = (float) populacao + area + PIB + numeropontosturisticos + PIBPerCapita + (1.0 / DensidadePopulacional);


      //informações para adicionar na hora de imprimir a carta

      printf("*** Carta %d ***\n\n ", numero); // Apresentação da carta cadastrada para melhor organização.
      
     printf("Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %lu habitantes\n Área: %.2f Km²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n Super Poder: %.2f\n\n", estado, codigo, nome, populacao, area, PIB, numeropontosturisticos, DensidadePopulacional, PIBPerCapita, superPoder);
      
     //Segunda carta a ser cadastrada

      printf("*** Cadastro da 2ª Carta ***\n\n"); // Frase para apresentar o primeiro cadastro 
  

      printf("Digite o número da carta:");
      scanf("%d", &numero2);
      printf("Carta: %d\n ", numero2);

      printf("Digite o estado:");
      scanf("%49s", estado2);
      printf("Estado: %s\n", estado2);

      printf("Digite o código:");
      scanf("%49s", codigo2);
      printf("Código: %s\n", codigo2);

      printf("Digite o nome da cidade:");
      scanf(" %49[^\n]", nome2); // Coloquei %49[^\n] para poder dar espaço nas cidades que possui mais de uma palavra
      printf("Nome da Cidade: %s\n", nome2);

      printf("Digite o número da população:");
      scanf("%lu", &populacao2);
      printf("População: %lu\n", populacao2);

      printf("Digite a Area:");
      scanf("%f", &area2);
      printf("Area: %f Km²\n", area2);

      printf("Digite o PIB:");
      scanf("%f", &PIB2);
      printf("PIB: %f Bilhões de reais\n", PIB2);

      printf("Digite o número de pontos turísticos:");
      scanf("%d", &numeropontosturisticos2);
      printf("Número de Pontos Turísticos: %d\n", numeropontosturisticos2);

      DensidadePopulacional2 = (float) populacao2 / area2; // Pedi para calcular a méida da populão pela area dividindo um a quantidade de populão pelo total de área.

      printf("Densidade Populacional: %.2f\n", DensidadePopulacional2);

      PIBPerCapita2  = (float) PIB2 / populacao2; // Pedi para calcular a média do PIB pela população divindo o PIB pela quantidade de pessoas.

      printf("PIB per Capita: %.2f\n\n", PIBPerCapita2);

      superPoder2 = (float) populacao2 + area2 + PIB2 + numeropontosturisticos2 + PIBPerCapita2 + (1.0 / DensidadePopulacional2);

      //Informações para adicionar na hora de imprimir a carta

      printf("*** Carta %d ***\n\n ", numero2); // Apresentação da carta cadastrada para melhor organização.

      printf("Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %lu habitantes\n Área: %.2f Km²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n Super Poder: %.2f\n\n", estado2, codigo2, nome2, populacao2, area2, PIB2, numeropontosturisticos2, DensidadePopulacional2, PIBPerCapita2,superPoder2);
      
      //Disputa de cartas

    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", numeropontosturisticos > numeropontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", DensidadePopulacional < DensidadePopulacional2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBPerCapita > PIBPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder > superPoder2);

  
    return 0;
} 