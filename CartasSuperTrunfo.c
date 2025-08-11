#include <stdio.h>
int main (){
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    char nome1;
    char nome2;

    printf("Qual será o nome da primeira cidade?  \n");
    scanf("%s", &nome1);
    printf("Quais os dados desta cidade?\n");
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Qual será o nome da segunda cidade?  \n");
    scanf("%s", &nome2);
    printf("Quais os dados desta cidade?\n");
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Dados totais:\n");
    printf("Cidade: %s", &nome1);
    printf("Área: %f", &area1);
    printf("População: %d", &populacao1);
    printf("PIB: %f", &pib1);
    printf("");
     printf("Cidade: %s", &nome2);
    printf("Área: %f", &area2);
    printf("População: %d", &populacao2);
    printf("PIB: %f", &pib2);



    return 0;


}
