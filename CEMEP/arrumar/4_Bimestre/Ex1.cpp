/*1)Escreva um pgm que receba a idade de 10 pessoas, calcule e exiba a quantidade de pessoas maiores de idade (idade >= 18 anos)*/
#include<stdio.h>
#include<conio.h>
main()
{
      int cont,idade,idade2=0;
      for (cont=1;cont<=10;cont++)
      {
          printf("Insira a Idade:");
          scanf("%i",&idade);
          
          if(idade>=18) 
          idade2++;
      }
      
      printf("Maiores de 18 anos:%i",idade2);
getch();
}
