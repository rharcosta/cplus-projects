/*Dado dois numeros e um caractere(+,-,*,/) representando uma operação a ser efetuada com eles, calcule e exiba o resultado da operação*/
#include<stdio.h>
#include<conio.h>
float a,b,c;
char carac; 
main()
{
      printf("Caractere (+,-,*,/)\t\n");
      printf("Escreva a expressao desejada:\n");
      scanf("%f %c %f",&a,&carac,&b);
      printf("Resultado:");
      switch (carac) 
      {
      case '+': printf("%.1f\n",a+b);break;
      case '-': printf("%.1f",a-b);break;
      case '*': printf("%.1f",a*b);break;
      case '/': printf("%.1f",a/b);break;
      default: printf("Erro!");break;
      }
      getch();
}
      
