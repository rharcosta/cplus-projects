/*Pgm quadrilha 1.1*/
#include<stdio.h>
#include<conio.h>
main()
{
      int s1,s2;
          printf("Entre com o sexo do primeiro [1]=M /[0]=F:\n\a\t");
          scanf("%d",&s1);
          printf("Entre com o sexo do primeiro [1]=M /[0]=F:\n\a\t");
          scanf("%d",&s2);
      if ((s1==1 &&(!s2==1))||((!s1==1)&& s2==1))
          printf("O primeiro pode dancar com o segundo\n");
      else
      printf("O primeiro nao pode dancar com o segundo\n"); 
getch();
}
