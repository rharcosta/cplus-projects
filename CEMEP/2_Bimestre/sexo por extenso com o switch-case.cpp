/*Pgm sexo por extenso com o switch-case*/
#include<stdio.h>
#include<conio.h>

main()
{
      char s;
      printf("Digite o sexo: ");
      scanf("%c",&s);
      switch(s)
      {
               case 'M': printf("Masculino\n"); break;
               case 'F': printf("Feminino\n"); break;
               default: printf("Invalido\n"); break;
               }
               getch();
}
