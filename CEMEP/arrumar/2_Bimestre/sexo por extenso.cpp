/*Pgm que informa o sexo por extenso*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      char s;
      system ("a");
      printf("Digite o sexo: ");
      scanf("%c",&s);
      if ((s=='M')|| (s=='m'))
      printf("MASCULINO\n");
      else if ((s=='F')||(s=='f'))
      printf("FEMININO");
      else 
      printf("INVALIDO");
      getch();
      }
