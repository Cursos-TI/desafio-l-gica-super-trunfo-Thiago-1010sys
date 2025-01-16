#include <stdio.h>

int main() {
    float area1, area2;
    float pib1, pib2;
    float populacao1, populacao2;
    char pais1[50], pais2[50];
    char atributo;

    
    printf("Digite o nome do primeiro país: \n");
    scanf(" %[^\n]", pais1);  

    printf("Digite a área de %s (em km²): \n", pais1);
    scanf("%f", &area1);

    printf("Digite o número de habitantes de %s (em milhões): \n", pais1);
    scanf("%f", &populacao1);

    printf("Digite o PIB de %s (em bilhões): \n", pais1);
    scanf("%f", &pib1);

    
    printf("\nDigite o nome do segundo país: \n");
    scanf(" %[^\n]", pais2);  

    printf("Digite a área de %s (em km²): \n", pais2);
    scanf("%f", &area2);

    printf("Digite o número de habitantes de %s (em milhões): \n", pais2);
    scanf("%f", &populacao2);

    printf("Digite o PIB de %s (em bilhões): \n", pais2);
    scanf("%f", &pib2);

    
    printf("\nEscolha o atributo para comparar (p para População, a para Área, i para PIB): \n");
    scanf(" %c", &atributo);  

    
    if (atributo == 'p') {
        if (populacao1 > populacao2) {
            printf("\n%s venceu a rodada com População!\n", pais1);
        } else if (populacao1 < populacao2) {
            printf("\n%s venceu a rodada com População!\n", pais2);
        } else {
            printf("\nEmpate na rodada de População!\n");
        }
    } else if (atributo == 'a') {
        if (area1 > area2) {
            printf("\n%s venceu a rodada com Área!\n", pais1);
        } else if (area1 < area2) {
            printf("\n%s venceu a rodada com Área!\n", pais2);
        } else {
            printf("\nEmpate na rodada de Área!\n");
        }
    } else if (atributo == 'i') {
        if (pib1 > pib2) {
            printf("\n%s venceu a rodada com PIB!\n", pais1);
        } else if (pib1 < pib2) {
            printf("\n%s venceu a rodada com PIB!\n", pais2);
        } else {
            printf("\nEmpate na rodada de PIB!\n");
        }
    } else {
        printf("\nAtributo inválido!\n");
    }

    return 0;
}
