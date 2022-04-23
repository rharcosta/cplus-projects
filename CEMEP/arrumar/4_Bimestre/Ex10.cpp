/*10)Leia 10 valores para o vetor X. Calcule e exiba a soma dos elementos do mesmo.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
      int cont,valores,acum=0;
      
      printf("Este pgm faz a soma de 10 Valores\n");
     
      for(cont=1;cont<=10;cont++)
      {
         printf("Digite os valores:\n");
         scanf("%d",&valores);
         acum=acum+valores;
      }
         
printf("A soma dos valores citados acima:%d",acum);

getch();
}      
