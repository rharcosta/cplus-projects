/*Faça com if, else if e switch case: 
       Dado dois numeros e um caractere(+,-,*,/) representando uma operação a ser efetuada com eles, calcule e exiba o resultado da operação*/
       
#include<stdio.h>
#include<conio.h>

float a,b,c;
char d;

main()
{
      printf("Digite o primeiro numero:\n");
      scanf("%f",&a);
      printf("Digite o segundo numero:\n");
      scanf("%f",&b);
      printf("Escolha a operacao: (+,-,*,/)\n");
      scanf("%s",&d);
      if (d=='+')
      {
      c=(a+b);
      printf("A soma eh igual a %.2f:", c);
      }
      else if (d=='-')
      {
      c=(a-b);
      printf("A subtracao eh igual a %.2f:", c);
      }
      else if(d=='*')
      { 
      c=(a*b);
      printf("A multiplicacao eh igual a %.2f:", c);
      }
      else if(d=='/') 
      {
      c=(a/b);
      printf("A divisao eh igual a %.2f:", c);
      }
      else
      printf("Nenhuma das opcoes");
      getch();
}
      
