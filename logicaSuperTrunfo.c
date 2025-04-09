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
   int Jogador1, Jogador2;
   float DensidadeDividida1, DensidadeDividida2;

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
   
   DensidadeDividida1 = 1/ Densidade_Populacional1;
   DensidadeDividida2 = 1/ Densidade_Populacional2;

   Super_Poder1 = (float) Populacao1 + Area1 + PIB1 + Pontos_Turisticos1 + DensidadeDividida1 + PIB_per_Capita1;
   Super_Poder2 = (float) Populacao2 + Area2 + PIB2 + Pontos_Turisticos2 + DensidadeDividida2 + PIB_per_Capita2;

   printf("Escolha qual atributo comparar\n");
   printf("1. Nome do País\n");
   printf("2. População\n");
   printf("3. Área\n");
   printf("4. PIB\n");
   printf("5. Pontos Turísticos\n");
   printf("6. Densidade Demográfica\n");
   printf("Escolha uma opção:\n");
   scanf("%d" , &Jogador1);

   switch (Jogador1)
   {
   case 1:
    printf("Jogador1 = %s\n Jogador2 = %s\n" , Nome_da_Cidade1, Nome_da_Cidade2);
    printf("Nome_da_Cidade1= %s\n Nome_da_Cidade2= %s\n" , Nome_da_Cidade1, Nome_da_Cidade2);
    printf("População1= %lu\n População2= %lu\n" , Populacao1, Populacao2);
    printf("Area1= %.2f\n Area2= %.2f\n",Area1 , Area2);
    printf("PIB1= %.2f\n PIB2= %.2f\n",PIB1, PIB2);
    printf("Pontos_Turisticos1= %d\n Pontos_Turisticos2= %d\n" ,Pontos_Turisticos1, Pontos_Turisticos2);
    printf("Densidade_Populacional1= %.2f\n Densidade_Populacional2= %.2f\n",Densidade_Populacional1 , Densidade_Populacional2);

    break;
    case 2:
    printf("Jogador1 = %lu\n Jogador2 = %lu\n" , Populacao1, Populacao2);
    printf("Nome_da_Cidade1= %s\n Nome_da_Cidade2= %s\n" , Nome_da_Cidade1, Nome_da_Cidade2);
    printf("População1= %lu\n População2= %lu\n" , Populacao1, Populacao2);
    printf("Area1= %.2f\n Area2= %.2f\n",Area1 , Area2);
    printf("PIB1= %.2f\n PIB2= %.2f\n",PIB1, PIB2);
    printf("Pontos_Turisticos1= %d\n Pontos_Turisticos2= %d\n" ,Pontos_Turisticos1, Pontos_Turisticos2);
    printf("Densidade_Populacional1= %.2f\n Densidade_Populacional2= %.2f\n",Densidade_Populacional1 , Densidade_Populacional2);


    if (Populacao1 > Populacao2)
    {
        printf("Jogador 1 Venceu!\n");
    } else if (Populacao1 == Populacao2){
        printf("Empate!\n");
    } else {
            printf("Jogador 2 Venceu!\n");
    }
    break;
    case 3:
    printf("Jogador1 = %.2f\n Jogador2= %.2f\n" , Area1, Area2);
    printf("Nome_da_Cidade1= %s\n Nome_da_Cidade2= %s\n" , Nome_da_Cidade1, Nome_da_Cidade2);
    printf("População1= %lu\n População2= %lu\n" , Populacao1, Populacao2);
    printf("Area1= %.2f\n Area2= %.2f\n",Area1 , Area2);
    printf("PIB1= %.2f\n PIB2= %.2f\n",PIB1, PIB2);
    printf("Pontos_Turisticos1= %d\n Pontos_Turisticos2= %d\n" ,Pontos_Turisticos1, Pontos_Turisticos2);
    printf("Densidade_Populacional1= %.2f\n Densidade_Populacional2= %.2f\n",Densidade_Populacional1 , Densidade_Populacional2);

    if (Area1 > Area2)
    {
        printf("Jogador 1 Venceu!\n");
    } else if (Area1 == Area2){
        printf("Empate!\n");
     } else {
            printf("Jogador 2 Venceu!\n");
        }
    break;
    case 4:
    printf("Jogador1 = %.2f\n Jogador2= %.2f\n" , PIB1, PIB2);
    printf("Nome_da_Cidade1= %s\n Nome_da_Cidade2= %s\n" , Nome_da_Cidade1, Nome_da_Cidade2);
    printf("População1= %lu\n População2= %lu\n" , Populacao1, Populacao2);
    printf("Area1= %.2f\n Area2= %.2f\n",Area1 , Area2);
    printf("PIB1= %.2f\n PIB2= %.2f\n",PIB1, PIB2);
    printf("Pontos_Turisticos1= %d\n Pontos_Turisticos2= %d\n" ,Pontos_Turisticos1, Pontos_Turisticos2);
    printf("Densidade_Populacional1= %.2f\n Densidade_Populacional2= %.2f\n",Densidade_Populacional1 , Densidade_Populacional2);

 
    if (PIB1> PIB2)
    {
        printf("Jogador 1 Venceu!\n");
    } else if (PIB1 == PIB2){
        printf("Empate!\n");
     } else {
            printf("Jogador 2 Venceu!\n");
        }
    break;
    case 5:
    printf("Jogador1 = %d\n Jogador2= %d\n" , Pontos_Turisticos1, Pontos_Turisticos2);
    printf("Nome_da_Cidade1= %s\n Nome_da_Cidade2= %s\n" , Nome_da_Cidade1, Nome_da_Cidade2);
    printf("População1= %lu\n População2= %lu\n" , Populacao1, Populacao2);
    printf("Area1= %.2f\n Area2= %.2f\n",Area1 , Area2);
    printf("PIB1= %.2f\n PIB2= %.2f\n",PIB1, PIB2);
    printf("Pontos_Turisticos1= %d\n Pontos_Turisticos2= %d\n" ,Pontos_Turisticos1, Pontos_Turisticos2);
    printf("Densidade_Populacional1= %.2f\n Densidade_Populacional2= %.2f\n",Densidade_Populacional1 , Densidade_Populacional2);
    if (Pontos_Turisticos1 >  Pontos_Turisticos2)
    {
        printf("Jogador 1 Venceu!\n");
    } else if (Pontos_Turisticos1 == Pontos_Turisticos2){
        printf("Empate!");
    } else {
            printf("Jogador 2 Venceu!\n");
        }
    break;
    case 6:
    printf("Jogador1 = %.2f\n Jogador2= %.2f\n" , Densidade_Populacional1, Densidade_Populacional2);
    printf("Nome_da_Cidade1= %s\n Nome_da_Cidade2= %s\n" , Nome_da_Cidade1, Nome_da_Cidade2);
    printf("População1= %lu\n População2= %lu\n" , Populacao1, Populacao2);
    printf("Area1= %.2f\n Area2= %.2f\n",Area1 , Area2);
    printf("PIB1= %.2f\n PIB2= %.2f\n",PIB1, PIB2);
    printf("Pontos_Turisticos1= %d\n Pontos_Turisticos2= %d\n" ,Pontos_Turisticos1, Pontos_Turisticos2);
    printf("Densidade_Populacional1= %.2f\n Densidade_Populacional2= %.2f\n",Densidade_Populacional1 , Densidade_Populacional2);

    if (Densidade_Populacional1 < Densidade_Populacional2)
    {
        printf("Jogador 1 Venceu!\n");
    } else if (Densidade_Populacional1 == Densidade_Populacional2){
        printf("Empate!\n");
    } else {
            printf("Jogador 2 Venceu!\n");
        }
    
    break;
   default:
   printf("Opção Invalida!\n");
    break;
   }

      
   return 0;


}
