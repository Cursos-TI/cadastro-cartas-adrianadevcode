/*
    Programa: Super Trunfo - Cadastro de Cartas (Nível Novato)
    Objetivo: ler do usuário os dados de DUAS cartas de cidades e
              mostrar esses dados na tela de forma organizada.

    Observações importantes:
    - Este programa NÃO usa estruturas de repetição (for/while)
      e NÃO usa estruturas de decisão (if/else), conforme pedido.
    - Tudo é feito em sequência: declara -> lê -> mostra.
    - Cada carta tem: estado, código, nome da cidade, população,
      área, PIB e número de pontos turísticos.

    Autor: (coloque seu nome aqui)
    Data: (coloque a data da entrega)
*/

#include <stdio.h>  // biblioteca padrão de entrada e saída

int main() {
    /* ======================================================
       1. DECLARAÇÃO DAS VARIÁVEIS
       Aqui criamos as variáveis que vão guardar os dados
       digitados pelo usuário. Como o enunciado pede
       "duas cartas", teremos um grupo de variáveis para
       a Carta 1 e outro grupo para a Carta 2.
       ====================================================== */

    /* ---- CARTA 1 ---- */
    char estado1;              // guarda uma letra de 'A' a 'H'
    char codigo1[4];           // guarda algo como "A01" (+ '\0' no final)
    char nomeCidade1[50];      // guarda o nome da cidade (texto)
    int populacao1;            // guarda o número de habitantes
    float area1;               // guarda a área em km²
    float pib1;                // guarda o PIB em bilhões de reais
    int pontosTuristicos1;     // guarda a quantidade de pontos turísticos

    /* ---- CARTA 2 ---- */
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    /* ======================================================
       2. ENTRADA DE DADOS - CARTA 1
       Nesta parte vamos pedir para o usuário digitar os
       dados da primeira carta. Cada "printf" mostra uma
       mensagem e cada "scanf" lê o que foi digitado.
       ====================================================== */
    printf("=== Cadastro da Carta 1 ===\n");

    // lê o estado (apenas 1 caractere). O espaço antes de %c evita
    // problemas com o ENTER que fica no buffer.
    printf("Informe o estado (A-H): ");
    scanf(" %c", &estado1);

    // lê o código da carta (ex: A01). %3s = no máximo 3 caracteres.
    printf("Informe o codigo da carta (ex: A01): ");
    scanf(" %3s", codigo1);

    // lê o nome da cidade até o usuário apertar ENTER.
    // %[^\n] significa: leia tudo até encontrar uma quebra de linha.
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    // lê a população (número inteiro)
    printf("Informe a populacao: ");
    scanf("%d", &populacao1);

    // lê a área da cidade (número com casas decimais)
    printf("Informe a area (em km2): ");
    scanf("%f", &area1);

    // lê o PIB da cidade (número com casas decimais)
    printf("Informe o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    // lê a quantidade de pontos turísticos (número inteiro)
    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    /* ======================================================
       3. ENTRADA DE DADOS - CARTA 2
       Repetimos o mesmo processo da Carta 1, agora para a
       segunda carta. Não usamos laço, então escrevemos de novo.
       ====================================================== */
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Informe o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o codigo da carta (ex: A01): ");
    scanf(" %3s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a populacao: ");
    scanf("%d", &populacao2);

    printf("Informe a area (em km2): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    /* ======================================================
       4. SAÍDA DE DADOS
       Agora vamos apenas mostrar na tela tudo o que foi
       digitado pelo usuário, organizado e com rótulos
       claros, como o exemplo do enunciado.
       ====================================================== */

    // ---- Exibe a Carta 1 ----
    printf("\n============================\n");
    printf("       CARTA 1\n");
    printf("============================\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    // %.2f mostra o número com 2 casas decimais
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // ---- Exibe a Carta 2 ----
    printf("\n============================\n");
    printf("       CARTA 2\n");
    printf("============================\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    /* ======================================================
       5. FIM DO PROGRAMA
       return 0 indica para o sistema operacional que
       o programa terminou corretamente.
       ====================================================== */
    return 0;
}
