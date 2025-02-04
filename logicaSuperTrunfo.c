#include <stdio.h>

int main() {
    // Definição das variáveis
    int codigo_cidade1, codigo_cidade2;
    float area1, populacao1, populacao_por_k2_1;
    float area2, populacao2, populacao_por_k2_2;

    // Cadastro da primeira cidade
    printf("Digite o código da primeira cidade:\n");
    scanf("%d", &codigo_cidade1);

    printf("Digite a área da primeira cidade (km²):\n");
    scanf("%f", &area1);

    printf("Digite a população da primeira cidade:\n");
    scanf("%f", &populacao1);

    // Cálculo da densidade populacional
    populacao_por_k2_1 = populacao1 / area1;

    // Cadastro da segunda cidade
    printf("\nDigite o código da segunda cidade:\n");
    scanf("%d", &codigo_cidade2);

    printf("Digite a área da segunda cidade (km²):\n");
    scanf("%f", &area2);

    printf("Digite a população da segunda cidade:\n");
    scanf("%f", &populacao2);

    // Cálculo da densidade populacional
    populacao_por_k2_2 = populacao2 / area2;

    // Exibição dos dados cadastrados
    printf("\nCidade 1:\n");
    printf("Código: %d\n", codigo_cidade1);
    printf("Área: %.2f km²\n", area1);
    printf("População: %.2f habitantes\n", populacao1);
    printf("Densidade populacional: %.2f hab/km²\n", populacao_por_k2_1);

    printf("\nCidade 2:\n");
    printf("Código: %d\n", codigo_cidade2);
    printf("Área: %.2f km²\n", area2);
    printf("População: %.2f habitantes\n", populacao2);
    printf("Densidade populacional: %.2f hab/km²\n", populacao_por_k2_2);

    // Comparação das cidades e determinação da vencedora
    printf("\nComparação das cidades:\n");

    if (populacao1 > populacao2) {
        printf("Cidade 1 tem maior população.\n");
    } else if (populacao2 > populacao1) {
        printf("Cidade 2 tem maior população.\n");
    } else {
        printf("Ambas as cidades têm a mesma população.\n");
    }

    if (area1 > area2) {
        printf("Cidade 1 tem maior área territorial.\n");
    } else if (area2 > area1) {
        printf("Cidade 2 tem maior área territorial.\n");
    } else {
        printf("Ambas as cidades têm a mesma área.\n");
    }

    if (populacao_por_k2_1 > populacao_por_k2_2) {
        printf("Cidade 1 tem maior densidade populacional.\n");
    } else if (populacao_por_k2_2 > populacao_por_k2_1) {
        printf("Cidade 2 tem maior densidade populacional.\n");
    } else {
        printf("Ambas as cidades têm a mesma densidade populacional.\n");
    }

    return 0;
}