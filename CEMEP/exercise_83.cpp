#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
      int cont_casa,canal,cont4=0,cont5=0,cont6=0,cont7=0,total;
      float porc4,porc5,porc6,porc7; 
      for(cont_casa=1;cont_casa<=5;cont_casa++)
      {
          printf("Casa %i", cont_casa);
          printf("\nEscolha um canal: (4,5,6,7)\n");
          printf("(Caso a televisao estiver desligada, por favor digite 3\n");
          scanf("%i",&canal);
      
               while((canal<3)||(canal>7))
               {
                 printf("Canal invalido!! Por favor, Digite Novamente:");
                 scanf("%i",&canal);
               }
     
      if(canal==4)
      {
      printf("Quantas pessoas estavam assistindo a este canal?\n");
      scanf("%i",&cont4);
      }
       
      if(canal==5)
      {
      printf("Quantas pessoas estavam assistindo a este canal?\n");
      scanf("%i",&cont5);
      } 
      
      if(canal==6)
      {
      printf("Quantas pessoas estavam assistindo a este canal?\n");
      scanf("%i",&cont6);
      } 
                         
      if(canal==7)
      {
      printf("Quantas pessoas estavam assistindo a este canal?\n");
      scanf("%i",&cont7);
      } 
             
total=cont4+cont5+cont6+cont7;
         
      }
porc4=(cont4*100)/total;
porc5=(cont5*100)/total;
porc6=(cont6*100)/total;
porc7=(cont7*100)/total;

printf("Porcentagem de audiencia do canal 4 :%.2f\n",porc4);
printf("Porcentagem de audiencia do canal 5 :%.2f\n",porc5); 
printf("Porcentagem de audiencia do canal 6 :%.2f\n",porc6); 
printf("Porcentagem de audiencia do canal 7 :%.2f\n",porc7); 
 
getch();
}     
               
         
