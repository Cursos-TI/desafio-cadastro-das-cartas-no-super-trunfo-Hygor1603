#include <stdio.h>

int main() {
    char codigo[4]; // Código da cidade (exemplo: A01, A02)
    int populacao;
    float area, pib;
    int pontos_turisticos;
    char continuar;
    
    // Laço principal para cadastrar cidades
    do {
        printf("Digite o código da cidade (exemplo: A01, B02): ");
        scanf("%s", codigo);

        printf("Digite a população da cidade: ");
        scanf("%d", &populacao);

        printf("Digite a área da cidade (em km²): ");
        scanf("%f", &area);

        printf("Digite o PIB da cidade (em bilhões de R$): ");
        scanf("%f", &pib);

        printf("Digite o número de pontos turísticos da cidade: ");
        scanf("%d", &pontos_turisticos);

        // Exibe os dados cadastrados
        printf("\nDados cadastrados:\n");
        printf("Código da cidade: %s\n", codigo);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: R$%.2f bilhões\n", pib);
        printf("Pontos turísticos: %d\n", pontos_turisticos);
        printf("-------------------------------\n");

        // Pergunta se o usuário quer cadastrar outra cidade
        printf("Deseja cadastrar outra cidade? (s/n): ");
        scanf(" %c", &continuar); // O espaço antes de %c é para limpar o buffer
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
