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
    int atributo1, atributo2;
    float soma1 = 0, soma2 = 0;

    printf("|==============[MENU DE COMPARAÇÃO - ESCOLHA 2 ATRIBUTOS]==================|\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");

    printf("Escolha o PRIMEIRO atributo (1 a 7): ");
    scanf("%d", &atributo1);

    do {
        printf("Escolha o SEGUNDO atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1) {
            printf("Erro: o segundo atributo deve ser diferente do primeiro.\n");
        }
    } while (atributo2 == atributo1);

    printf("\n|==============[COMPARAÇÃO DE CARTAS]==================|\n");
    printf("Comparando: %s x %s\n", nome, nome2);

    for (int i = 0; i < 2; i++) {
        int atributo = (i == 0) ? atributo1 : atributo2;
        float valor1 = 0, valor2 = 0;
        int menorVence = 0;

        switch (atributo) {
            case 1:
                valor1 = populacao;
                valor2 = populacao2;
                printf("Atributo %d: População\n", i + 1);
                break;
            case 2:
                valor1 = area;
                valor2 = area2;
                printf("Atributo %d: Área\n", i + 1);
                break;
            case 3:
                valor1 = pib;
                valor2 = pib2;
                printf("Atributo %d: PIB\n", i + 1);
                break;
            case 4:
                valor1 = pontosTuristicos;
                valor2 = pontosTuristicos2;
                printf("Atributo %d: Pontos Turísticos\n", i + 1);
                break;
            case 5:
                valor1 = densidade;
                valor2 = densidade2;
                menorVence = 1;
                printf("Atributo %d: Densidade Demográfica (MENOR VENCE)\n", i + 1);
                break;
            case 6:
                valor1 = pibPerCapita;
                valor2 = pibPerCapita2;
                printf("Atributo %d: PIB per Capita\n", i + 1);
                break;
            case 7:
                valor1 = superPoder;
                valor2 = superPoder2;
                printf("Atributo %d: Super Poder\n", i + 1);
                break;
            default:
                printf("Atributo inválido!\n");
                continue;
        }

        printf("Carta 1: %.2f | Carta 2: %.2f\n", valor1, valor2);

        soma1 += valor1;
        soma2 += valor2;

        char *resultado = (valor1 == valor2) ? "Empate" :
                          (menorVence ? ((valor1 < valor2) ? "Carta 1 venceu!" : "Carta 2 venceu!") :
                                        ((valor1 > valor2) ? "Carta 1 venceu!" : "Carta 2 venceu!"));

        printf("Resultado parcial: %s\n\n", resultado);
    }

    printf("|==============[RESULTADO FINAL DA RODADA]==================|\n");
    printf("Soma dos atributos:\n");
    printf("Carta 1: %.2f\n", soma1);
    printf("Carta 2: %.2f\n", soma2);

    char *vencedorFinal = (soma1 == soma2) ? "Empate!" :
                          ((soma1 > soma2) ? "Carta 1 venceu!" : "Carta 2 venceu!");

    printf("Resultado final: %s\n", vencedorFinal);

    printf("|==============[FIM DA COMPARAÇÃO]==================|: \n\n");
    printf("|==============[PROGRAMA FINALIZADO]==================|: \n");

    return 0;
}
// Fim do programa
