#include <stdio.h>

int main () {
    char estado; 
    char codigo[4]; 
    char cidade[50];
    int populacao; 
    int pontosTuristicos;
    float area; 
    float pib;

    printf("Digite o estado (A-H): \n ");
    scanf("%c", &estado);
    
    printf("Digite o código da carta (ex: A01): \n ");
    scanf("%4s", codigo);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);
    
    printf("Digite a população: \n");
    scanf("%d", &populacao);
    
    printf("Digite a área (km²): \n");
    scanf("%f", &area);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);
    
    printf("Estado: %c\n" estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
  }