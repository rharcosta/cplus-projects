/*Rodizio com if*/
#include<stdio.h>
#include<conio.h>
main()
{
      int a,b;
      printf("Digite o ultimo numero da placa:\n");
      scanf("%i",&a);
      b=a%10;
      printf("Rodizio\n");
      if ((b==1)||(b==2))
      printf("Segunda-feira\n");
      if ((b==3)||(b==4))
      printf("Terca-feira\n");
      if ((b==5)||(b==6))
      printf("Quarta-feira\n");
      if ((b==7)||(b==8))
      printf("Quinta-feira\n");
      if ((b==9)||(b==0))
      printf("Sexta-feira\n");
getch();
}
      
      
