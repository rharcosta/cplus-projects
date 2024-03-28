/*Dado o nome e o salário de 5 funcionários, exiba: 
       a)Quantos possuem salário acima de 500.. 
       b)A média dos salários dos funcionários.*/
#include<stdio.h>
#include<conio.h>
main()
{
      char nome[30];
      float salario,cont,media,sal_acima;
      int a;
      a=1;
      cont=0;
      sal_acima=0;
      media=0;
      printf("Este pgm calcula o salario medio de todos os funcionarios e quantos possuem salario acima de 500...\n");
      while (a<=5)
      {
            printf("Insira o nome do funcionario:\n");
            scanf("%s",&nome);
            printf("Insira o salario deste funcionario:\n");
            scanf("%f",&salario);
      cont=cont+salario;
      
      if (salario>=500)
      sal_acima=sal_acima+1;
      a++;
      }
      media=cont/5;
      printf("A media total dos salarios e igual a: %.2f\n",media);
      printf("Possuem o salario acima de 500: %.2f\n",sal_acima);
getch();
}
      
