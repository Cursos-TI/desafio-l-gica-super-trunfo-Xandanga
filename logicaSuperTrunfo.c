#include <stdio.h>
int main(){
   char Estado1, Estado2;
   char Codigo1[5], Codigo2[5];
   char Nome_da_Cidade1[15], Nome_da_Cidade2[15];
   unsigned long int Populacao1 , Populacao2;
   float Area1, Area2;
   float PIB1 , PIB2;
   int Pontos_Turisticos1, Pontos_Turisticos2;
   float Densidade_Populacional1, Densidade_Populacional2;
   float PIB_per_Capita1, PIB_per_Capita2;
   float Super_Poder1, Super_Poder2;
   float Densidade_Dividida1 , Densidade_Dividida2;
   int Densidade_Dividida, Super_Poder, PIB_per_Capita, Pontos_Turisticos, PIB, Area , Populacao;


   printf("Estado1 \n");
   scanf(" %c", &Estado1);

   printf("Codigo1 \n");
   scanf("%s", &Codigo1);

   printf("Nome_da_Cidade1 \n");
   scanf("%s", &Nome_da_Cidade1);

   printf("População1 \n");
   scanf("%lu", &Populacao1);

   printf("Area1 \n");
   scanf("%f", &Area1);

   printf("PIB1 \n");
   scanf("%f", &PIB1);

   printf("Pontos_Turisticos1 \n");
   scanf("%d", &Pontos_Turisticos1);

   Densidade_Populacional1 = Populacao1 / Area1;

   PIB_per_Capita1 = PIB1 / Populacao1;
   
   printf("Estado2 \n");
   scanf(" %c", &Estado2);

   printf("Codigo2 \n");
   scanf("%s", &Codigo2);

   printf("Nome_da_Cidade2 \n");
   scanf("%s", &Nome_da_Cidade2);

   printf("População2 \n");
   scanf("%lu", &Populacao2);

   printf("Area2 \n");
   scanf("%f", &Area2);

   printf("PIB2 \n");
   scanf("%f", &PIB2);

   printf("Pontos_Turisticos2 \n");
   scanf("%d", &Pontos_Turisticos2);

   Densidade_Populacional2 = Populacao2 / Area2;

   PIB_per_Capita2 = PIB2 / Populacao2;

   Densidade_Dividida1 = 1/ Densidade_Populacional1;
   Densidade_Dividida2 = 1/ Densidade_Populacional2;

   Super_Poder1 = (float) Populacao1 + Area1 + PIB1 + Pontos_Turisticos1 + Densidade_Dividida1 + PIB_per_Capita1;
   Super_Poder2 = (float) Populacao2 + Area2 + PIB2 + Pontos_Turisticos2 + Densidade_Dividida2 + PIB_per_Capita2;

   printf("Carta 1 \n");
   printf("Estado1: %c\n", Estado1);
   printf("Codigo1: %s\n" , Codigo1);
   printf("Nome_da_Cidade1: % s\n" , Nome_da_Cidade1);
   printf("Populacao1: %lu\n" , Populacao1);
   printf("Area1: %.2f\n" , Area1);
   printf("PIB1: %.2f\n" , PIB1);
   printf("Pontos_Turisticos1: %d\n" , Pontos_Turisticos1);
   printf("Densidade_Populacional1: %.2f\n" , Densidade_Populacional1);
   printf("PIB per Capita1: %.2f\n" , PIB_per_Capita1);
   printf("Super_Poder1: %.2f\n" , Super_Poder1 );
   
   printf("Carta 2 \n");
   printf("Estado2: %c\n", Estado2);
   printf("Codigo2: %s\n" , Codigo2);
   printf("Nome_da_Cidade2: % s\n" , Nome_da_Cidade2);
   printf("Populacao2: %lu\n" , Populacao2);
   printf("Area2: %.2f\n" , Area2);
   printf("PIB2: %.2f\n" , PIB2);
   printf("Pontos_Turisticos2: %d\n" , Pontos_Turisticos2);
   printf("Densidade_Populacional2: %.2f\n" , Densidade_Populacional2);
   printf("PIB per Capita2: %.2f\n" , PIB_per_Capita2);
   printf("Super_Poder2: %.2f\n" , Super_Poder2);

   printf("Resultado das comparações\n");
   if ( Populacao1 > Populacao2){
      printf("População 1 é maior\n");
   }
   else{
      printf("População 2 é maior\n");
   }
   if( Area1 > Area2){
      printf("Area 1 é maior\n");
   }
   else{
      printf("Area 2 é maior\n");
   }
   if( PIB1 > PIB2){
      printf("PIB 1 é maior\n");
   }
   else{
      printf("PIB 2 é maior\n");
   }
   if(Pontos_Turisticos1 > Pontos_Turisticos2){
      printf("Pontos Turisticos 1 é maior\n");
   }
   else{
      printf("Pontos Turisticos 2 é maior\n");
   }
   if(Densidade_Dividida1 > Densidade_Dividida2){
      printf("Densidade 1 é maior\n");
   }
   else{
      printf("Densidade 2 é maior\n");
   }
   if (PIB_per_Capita1 > PIB_per_Capita2){
      printf("PIB per Capita 1 é maior\n");
   }
   else{
      printf("PIB per Capita 2 é maior\n");
   }
   if (Super_Poder1 > Super_Poder2){
      printf("Super Poder 1 é maior\n");
   }
   else{
         printf("Super Poder 2 é maior\n");
   }
   Populacao =  Populacao1 > Populacao2;
   Area =  Area1 > Area2;
   PIB =  PIB1 > PIB2;
   Pontos_Turisticos =  Pontos_Turisticos1 > Pontos_Turisticos2;
   Densidade_Dividida =  Densidade_Dividida1 > Densidade_Dividida2;
   PIB_per_Capita = PIB_per_Capita1 > PIB_per_Capita2;
   Super_Poder = Super_Poder1 > Super_Poder2;
   printf( "Resultado final\n ");
   printf(" 1 - carta 1 vence \n");
   printf(" 0 - carta 2 vence \n");

   printf("População: %d\n" , Populacao);
   printf("Area: %d\n" , Area);
   printf("PIB: %d\n" , PIB);
   printf("Pontos Turisticos: %d\n" , Pontos_Turisticos);
   printf("Densidade Populacional: %d\n" , Densidade_Dividida);
   printf("PIB per Capita: %d\n" , PIB_per_Capita);
   printf("Super Poder: %d\n" , Super_Poder);

   return 0;


}
