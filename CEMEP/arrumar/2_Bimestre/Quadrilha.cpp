/*Solicitar sexo de 2 pessoas que pretendem formar um par para participar de uma quadrilha em uma festa junina.
Os administradores da festa determinaram que somente ser�o aceitos pares heterog�neos( formados por pessoas do sexo diferente).
N�o ser�o aceitos casais formados pelo mesmo sexo. 
�pos a entrada dos dados, o pgm deve informar se s�o realmente aceitos na dan�a */

#include<stdio.h>
#include<conio.h>

main()
{
      int a,b;
      printf("1- Para sexo feminino e 2- Para sexo masculino\n");
      printf("Digite o sexo da primeira pessoa:\n");
      scanf("%i",&a);
      printf("Digite o sexo da segunda pessoa:\n");
      scanf("%i",&b);
      
      if ((a==1)||(b==1))
      printf("Sexo feminino\n");
      if ((b==2)||(a==2))
      printf("Sexo masculino\n");
      else 
      printf("Nao eh possivel participar da quadrilha\n");
      if ((a==1) && (b==2))
      printf ("Sucesso na realizacao da possibilidade\n");
      else 
      printf("Impossivel na formacao do par\n");
getch();
} 
