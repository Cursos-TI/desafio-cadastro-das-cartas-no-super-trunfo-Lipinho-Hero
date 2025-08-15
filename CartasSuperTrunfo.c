#include <stdio.h>

int main (){
    int populacao[2];
    float area[2];
    float pib[2];
    int turismos[2];
    char nome1[50];
    char nome2[50];
    int pontos=0;
    float pibpercapta[2];
    float densidadepopu[2];
    float superpoder[2]; //soma de todos os fatores 
    printf("Qual sera o nome da primeira cidade?  \n");
    scanf("%s", nome1);
    printf("Quais os dados desta cidade?\n");
    printf("Populacao: ");
    scanf("%d", &populacao[0]);
    printf("area: ");
    scanf("%f", &area[0]);
    printf("PIB: ");
    scanf("%f", &pib[0]);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &turismos[0]);
    printf("Qual sera o nome da segunda cidade?  \n");
    scanf("%s", nome2);
    printf("Quais os dados desta cidade?\n");
    printf("Populacao: ");
    scanf("%d", &populacao[1]);
    printf("area: ");
    scanf("%f", &area[1]);
    printf("PIB: ");
    scanf("%f", &pib[1]);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &turismos[1]);
    printf("\n");
    densidadepopu[0]= populacao[0]/area[0];
    densidadepopu[1]= populacao[1]/area[1];
    pibpercapta[0] = pib[0]/populacao[0];
    pibpercapta[1] = pib[1]/populacao[1];
    superpoder[0]=populacao[0]+pib[0]+area[0]+turismos[0]+1/densidadepopu[0]+pibpercapta[0];
    superpoder[1]=populacao[1]+pib[1]+area[1]+turismos[1]+1/densidadepopu[1]+pibpercapta[1];
    printf("Dados totais:\n");
    printf("\n");
    printf("Cidade: %s\n", nome1);
    printf("area: %.1f\n", area[0]);
    printf("Populacao: %d\n", populacao[0]);
    printf("PIB: %.1f\n", pib[0]);
    printf("Numero de pontos turisticos: %d\n", turismos[0]);
    printf("Densidade populacional: %.1f\n", densidadepopu[0]);
    printf("PIB per capta: %.1f\n", pibpercapta[0]);
    printf("\n");
    printf("Cidade: %s\n", nome2);
    printf("area: %.1f\n", area[1]);
    printf("Populacao: %d\n", populacao[1]);
    printf("PIB: %.1f\n", pib[1]);
    printf("Numero de pontos turisticos: %d\n", turismos[1]);
    printf("Densidade populacional: %.1f\n", densidadepopu[1]);
    printf("PIB per capta: %.1f\n", pibpercapta[1]);
    printf("\n");
    if (area[0] > area[1]){
     pontos++;
     printf("%s possui maior area e venceu esse duelo\n", nome1);
    }else{
      printf("%s possui maior area e venceu esse duelo\n", nome2);
    }
    if (densidadepopu[0]<densidadepopu[1])
    {
      pontos++;
    printf("%s possui menor densidade populacional e venceu esse duelo\n", nome1);
    }else{
      printf("%s possui menor densidade populacional e venceu esse duelo\n", nome2);
    }
    if (pibpercapta[0]>pibpercapta[1])
    {
      pontos++;
    printf("%s possui maior PIB per capta e venceu esse duelo\n", nome1);
    }else{
      printf("%s possui maior PIB per capta e venceu esse duelo\n", nome2);
    }
    if (populacao[0] > populacao[1]){
     pontos++;
    printf("%s possui maior populacao e venceu esse duelo\n", nome1);
    }else{
      printf("%s possui maior populacao e venceu esse duelo\n", nome2);
    }
    if (pib[0] > pib[1]){
     pontos++;
    printf("%s possui maior PIB e venceu esse duelo\n", nome1);
    }else{
      printf("%s possui maior PIB e venceu esse duelo\n", nome2);
    }
    if (turismos[0]>turismos[1])
    {
      pontos++;
    printf("%s possui mais pontos turisticos e venceu esse duelo\n", nome1);
    }else{
      printf("%s possui mais pontos turisticos e venceu esse duelo\n", nome2);
    }
    if (superpoder[0] > superpoder[1]){
      pontos++;
    printf("O SUPERPODER da cidade %s foi mais forte e garantiu +1 ponto\n", nome1);
    }else{
      printf("O SUPERPODER da cidade %s foi mais forte e garantiu +1 ponto\n", nome2);
    }
    if (pontos >= 4){
      printf("A cidade %s possui mais pontos positivos e venceu a disputa", nome1);  
    }else{
      printf("A cidade %s possui mais pontos positivos e venceu a disputa", nome2);    
    }
    return 0;
}
