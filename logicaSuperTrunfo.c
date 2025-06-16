#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Declaração das variáveis - CARTA 1
    char estado[5], codigo[10], nome[50];
    unsigned long int populacao;
    int pontosTuristicos;
    float area, pib, densidade, pibPerCapita, superPoder;

    // CARTA 2
    char estado2[5], codigo2[10], nome2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;

    // Início do programa
    printf("|==============[PROGRAMA INICIADO]==================|: \n");
    printf("|==============[CADASTRO DE CARTAS]==================|: \n");
    printf("|==============[CARTAS DE CIDADES]==================|: \n");
    // Leitura dos dados CARTA 1
    printf("|==============[INICIO CARTA 1]==================|: \n");
    printf("Digite os dados da Carta 1: \n");
    printf("Digite o estado: ");
    scanf("%s", estado);
    printf("Digite o código:");
    scanf("%s", codigo);
    getchar(); // Problemas com o espaço em branco após o scanf, usando fgets para ler a string com espaços
    printf("Digite o nome da cidade: ");
    fgets(nome, 50, stdin);
    printf("Digite a população: ");
    scanf("%lu", &populacao);
    printf("Digite a área(em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB(em bilhões de R$): ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);
    // Cálculo da densidade populacional
    densidade = populacao / area;
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade);
    // Cálculo do PIB per capita
    pibPerCapita = (pib * 1000000000) / populacao;
    printf("PIB per capita: %.2f reais\n", pibPerCapita);
    // Cálculo do Super Poder - CARTA 1
    superPoder = (float)populacao + area + pib + (float)pontosTuristicos + pibPerCapita + (1.0 / densidade);
    printf("Super Poder: %.2f\n", superPoder);
    printf("|==============[FIM DA CARTA 1]==================|: \n\n");

    // Leitura dos dados CARTA 2
    printf("|==============[INICIO CARTA 2]==================|: \n");
    printf("Digite os dados da Carta 2: \n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o código:");
    scanf("%s", codigo2);
    getchar(); // Problemas com o espaço em branco após o scanf, usando fgets para ler a string com espaços
    printf("Digite o nome da cidade: ");
    fgets(nome2, 50, stdin);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área(em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB(em bilhões de R$): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    // Cálculo da densidade populacional
    densidade2 = populacao2 / area2;
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade2);
    // Cálculo do PIB per capita
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);
    // Cálculo do Super Poder - CARTA 2
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("|==============[FIM DA CARTA 2]==================|: \n\n");

    // Exibição dos dados
    printf("|==============[DADOS DAS CARTAS]==================|: \n");
    //Carta 1
     printf("\n[CARTA 1]\n | Estado: %s | Código: %s | Nome: %s |", estado, codigo, nome);
    printf("| População: %lu | Área: %.2f km² | PIB: %.2f bilhões |\n", populacao, area, pib);
    printf("| Pontos Turísticos: %d | Densidade Populacional: %.2f hab/km² |\n", pontosTuristicos, densidade);
    printf("| PIB per Capita: %.2f reais | Super Poder: %.2f |\n", pibPerCapita, superPoder);

    //Carta 2
    printf("\n[CARTA 2]\n | Estado: %s | Código: %s | Nome: %s |", estado2, codigo2, nome2);
    printf("| População: %lu | Área: %.2f km² | PIB: %.2f bilhões |\n", populacao2, area2, pib2);
    printf("| Pontos Turísticos: %d | Densidade Populacional: %.2f hab/km² |\n", pontosTuristicos2, densidade2);
    printf("| PIB per Capita: %.2f reais | Super Poder: %.2f |\n", pibPerCapita2, superPoder2);
    printf("|==============[FIM DADOS DAS CARTAS]==================|: \n\n");

    // Comparações
    printf("\n|==============[COMPARAÇÃO DE CARTAS]==================|\n");

    if (populacao > populacao2) {
        printf("População: Carta 1 venceu\n");
    } else if (populacao < populacao2) {
        printf("População: Carta 2 venceu\n");
    } 

    if (area > area2) {
        printf("Área: Carta 1 venceu\n");
    } else if (area < area2) {
        printf("Área: Carta 2 venceu\n");
    } 

    if (pib > pib2) {
        printf("PIB: Carta 1 venceu\n");
    } else if (pib < pib2) {
        printf("PIB: Carta 2 venceu\n");
    } 

    if (pontosTuristicos > pontosTuristicos2) {
        printf("Pontos Turísticos: Carta 1 venceu\n");
    } else if (pontosTuristicos < pontosTuristicos2) {
        printf("Pontos Turísticos: Carta 2 venceu\n");
    } 

    // Na densidade, o menor valor vence
    if (densidade < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (menor densidade)\n");
    } else if (densidade > densidade2) {
        printf("Densidade Populacional: Carta 2 venceu (menor densidade)\n");
    }

    if (pibPerCapita > pibPerCapita2) {
        printf("PIB per Capita: Carta 1 venceu\n");
    } else if (pibPerCapita < pibPerCapita2) {
        printf("PIB per Capita: Carta 2 venceu\n");
    } 

    if (superPoder > superPoder2) {
        printf("Super Poder: Carta 1 venceu\n");
    } else if (superPoder < superPoder2) {
        printf("Super Poder: Carta 2 venceu\n");
    } 

    printf("|==============[FIM DA COMPARAÇÃO]==================|: \n\n");

    // Fim do programa
    printf("|==============[PROGRAMA FINALIZADO]==================|: \n");

    return 0;
}
