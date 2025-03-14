#include <stdio.h>

int main() {
    char estado, estado2, codigo_da_carta[4], codigo_da_carta2[4], cidade[50], cidade2[50];    
    int populacao, populacao2, numero_de_pontos_turisticos, numero_de_pontos_turisticos2;
    float pib, pib2;

    printf("Bem vindo ao Super Trunfo de cidades do Brasil\n");
    printf("Vamos comecar a criar as cartas\n");

    printf("Digite uma letra entre A e H que represente seu estado: ");
    scanf(" %c", &estado);
    printf("Digite o codigo da carta (exemplo: A03): ");
    scanf("%3s", codigo_da_carta);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("\nAgora vamos criar a carta do seu adversario\n");

    printf("Digite uma letra entre A e H que represente seu estado: ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (exemplo: A03): ");
    scanf("%3s", codigo_da_carta2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo da carta: %s\n", codigo_da_carta);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Numero de pontos turisticos: %d\n", numero_de_pontos_turisticos);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigo_da_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", numero_de_pontos_turisticos2);

    
    return 0;
}
