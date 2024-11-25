#include<stdio.h>
int main(){
     int codigo,codigo2;                                                
     float area,area2,Pib,Pib2,populacao2,populacao,pontosturisticos,pontosturisticos2,densidadepopulacional,densidadepopulacional2,pibpercapita,pibpercapita2;
     char nome[50],nome2[50];

     ///fazer cadastro das cartas e a comparação das áreas entre elas

     printf("digite código do país:\n");
     scanf("%d",&codigo);

     printf("digite o código do país 2:\n");
     scanf("%d",&codigo2);
      
     printf("digite a área:\n");
     scanf("%f", &area);

     printf("digite a área do país 2:\n");
     scanf("%f",&area2);

     printf("digite o pib:\n");
     scanf("%f", &Pib);

     printf("digite o pib do país 2:\n");
     scanf("%f",&Pib2);

     printf("digite a população:\n");
     scanf("%f", &populacao);

     printf("digite a população do país 2:\n");
     scanf("%f",&populacao2);

     printf("digite quantidade de pontos turísticos:\n");
     scanf("%e", &pontosturisticos);

     printf("digite quantidade de pontos turísticos do país 2:\n");
     scanf("%e", &pontosturisticos2);

     printf("digite o nome:\n");
     scanf("%s", &nome);

     printf("digite o nome do país 2:\n");
     scanf("%s", &nome2);

     printf("digite a densidade populacional:\n");
     scanf("%f", &densidadepopulacional);

     printf("digite seu PIB per Capita:\n");
     scanf("%f", &pibpercapita);

     printf("digite a densidade populacional do país 2:\n");
     scanf("%f", &densidadepopulacional2);

     printf("digite seu PIB per Capita do país 2:\n");
     scanf("%f", &pibpercapita2);

     densidadepopulacional =(populacao / area);
     pibpercapita =(Pib / populacao);

     densidadepopulacional2 =(populacao2 / area2);
     pibpercapita2 =(Pib2 / populacao2);

     printf("código do país: %d - área: %f",codigo,area);
     printf("pib: %f - nome:%s", Pib,nome);
     printf("população: %f - pontos turísticos: %e",populacao,pontosturisticos);
     printf("densidade populacional: %f - PIB per Capita: %f", densidadepopulacional,pibpercapita);
     printf("código do país 2 : %d - área 2: %f",codigo2,area2);
     printf("pib 2: %f - nome 2:%s", Pib2,nome2);
     printf("população 2: %f - pontos turísticos 2: %e",populacao2,pontosturisticos2);
     printf("densidade populacional 2: %f - PIB per Capita 2: %f", densidadepopulacional2,pibpercapita2);

     if(area>area2){
       printf("area da carta um venceu\n");
     } else {
       printf("area carta dois venceu\n");
     }

}    
 


