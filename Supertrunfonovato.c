#include <stdio.h>

int main() {

    // CARTA 1
    char Estado1;
    char Carta1[4];
    char Nome1[20];
    int Populacao1;
    float Area1;
    float PIB1;
    int Turisticos1;

    printf("\n--- Carta 1 ---\n");

    // Dados Carta 1
    printf("Escolha a letra da sua Carta:\n");
    scanf(" %c", &Estado1); // espaço antes de %c evita pular leitura

    printf("Código da Carta (ex: A01):\n");
    scanf("%s", Carta1);

    printf("Nome da Cidade:\n");
    scanf(" %[^\n]", Nome1); // espaço antes de %[^\n] consome \n

    printf("População:\n");
    scanf("%d", &Populacao1);

    printf("Área:\n");
    scanf("%f", &Area1);

    printf("PIB:\n");
    scanf("%f", &PIB1);

    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &Turisticos1);

    // CARTA 2
    char Estado2;
    char Carta2[4];
    char Nome2[20];
    int Populacao2;
    float Area2;
    float PIB2;
    int Turisticos2;

    printf("\n--- Carta 2 ---\n");

    // Dados Carta 2
    printf("Escolha a letra da sua Carta:\n");
    scanf(" %c", &Estado2);

    printf("Código da Carta (ex: B02):\n");
    scanf("%s", Carta2);

    printf("Nome da Cidade:\n");
    scanf(" %[^\n]", Nome2); // espaço antes de %[^\n] consome \n

    printf("População:\n");
    scanf("%d", &Populacao2);

    printf("Área:\n");
    scanf("%f", &Area2);

    printf("PIB:\n");
    scanf("%f", &PIB2);

    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &Turisticos2);

    // Exibir Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Carta1);
    printf("Nome da Cidade: %s\n", Nome1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Pontos Turísticos: %d\n", Turisticos1);

    // Exibir Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Carta2);
    printf("Nome da Cidade: %s\n", Nome2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", Turisticos2);

    return 0;
}
