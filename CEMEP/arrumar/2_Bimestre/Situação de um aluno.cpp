/*Pgm que determina a situação de um aluno*/
#include<stdio.h>
#include<conio.h>
main()
{
      int f;
      float m;
      printf("Insira a média do aluno: ");
      scanf("%i",&m);
      printf("Insira o numero de faltas: ");
      scanf("%f",&f);
      if (f<=40)
         if(m>=6.0)
                   printf("Aprovado\n");
         else 
                   printf("Recuperação\n");
      else 
      printf("Reprovado\n");
getch();
}
