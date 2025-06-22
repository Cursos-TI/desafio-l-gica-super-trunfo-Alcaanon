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
    printf("\n[CARTA 1]\n | Estado: %s | Código: %s | Nome: %s |", estado, codigo, nome);
    printf("| População: %lu | Área: %.2f km² | PIB: %.2f bilhões |\n", populacao, area, pib);
    printf("| Pontos Turísticos: %d | Densidade Populacional: %.2f hab/km² |\n", pontosTuristicos, densidade);
    printf("| PIB per Capita: %.2f reais | Super Poder: %.2f |\n", pibPerCapita, superPoder);

    printf("\n[CARTA 2]\n | Estado: %s | Código: %s | Nome: %s |", estado2, codigo2, nome2);
    printf("| População: %lu | Área: %.2f km² | PIB: %.2f bilhões |\n", populacao2, area2, pib2);
    printf("| Pontos Turísticos: %d | Densidade Populacional: %.2f hab/km² |\n", pontosTuristicos2, densidade2);
    printf("| PIB per Capita: %.2f reais | Super Poder: %.2f |\n", pibPerCapita2, superPoder2);
    printf("|==============[FIM DADOS DAS CARTAS]==================|: \n\n");

    // Menu interativo
    int opcao;
    printf("|==============[MENU DE COMPARAÇÃO]==================|\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha o atributo para comparar (1 a 7): ");
    scanf("%d", &opcao);

    printf("\n|==============[COMPARAÇÃO DE CARTAS]==================|\n");
    printf("Comparando: %s x %s\n", nome, nome2);

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("Carta 1: %lu | Carta 2: %lu\n", populacao, populacao2);
            if (populacao > populacao2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (populacao < populacao2) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("Carta 1: %.2f km² | Carta 2: %.2f km²\n", area, area2);
            if (area > area2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (area < area2) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("Carta 1: %.2f bilhões | Carta 2: %.2f bilhões\n", pib, pib2);
            if (pib > pib2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (pib < pib2) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("Carta 1: %d | Carta 2: %d\n", pontosTuristicos, pontosTuristicos2);
            if (pontosTuristicos > pontosTuristicos2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (pontosTuristicos < pontosTuristicos2) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 5:
            printf("Atributo: Densidade Demográfica (MENOR VENCE)\n");
            printf("Carta 1: %.2f hab/km² | Carta 2: %.2f hab/km²\n", densidade, densidade2);
            if (densidade < densidade2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (densidade > densidade2) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("Carta 1: %.2f R$ | Carta 2: %.2f R$\n", pibPerCapita, pibPerCapita2);
            if (pibPerCapita > pibPerCapita2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (pibPerCapita < pibPerCapita2) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 7:
            printf("Atributo: Super Poder\n");
            printf("Carta 1: %.2f | Carta 2: %.2f\n", superPoder, superPoder2);
            if (superPoder > superPoder2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (superPoder < superPoder2) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        default:
            printf("Opção inválida! Por favor, escolha um número de 1 a 7.\n");
            break;
    }

    printf("|==============[FIM DA COMPARAÇÃO]==================|: \n\n");
    printf("|==============[PROGRAMA FINALIZADO]==================|: \n");

    return 0;
}
// Fim do programa