/*4)Tem-se um conjunto de dados contendo a altura e o sexo (1-M/2-F) de 5 pessoas. Faça um pgm que calcule e exiba:
a)A maior e a menor altura do grupo;
b)A média de altura das mulheres;
c)O nro de homens.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
      int cont,sexo,homens=0,mulheres=0;
      float altura,maior=0,menor=999900,alt=0,media=0;
      for(cont=1;cont<=5;cont++)
      {
      printf("\nInsira seu sexo 1-Masculino 2-Feminino:\n");
      scanf("%d",&sexo);
                        while((sexo<1)||(sexo>2))
                        {
                        printf("Erro ao digitar o numero. Por favor digite novamente:\n");
                        scanf("%d",&sexo);
                        }
      
      printf("\nInsira sua altura:\n");
      scanf("%f",&altura);
      
      if(altura<menor)
      menor=altura;
      
      if(altura>maior)
      maior=altura;
      
      if(sexo==1)
      homens=homens+1;
      
      if(sexo==2)
      {
      mulheres=mulheres+1;
      alt=alt+altura;
      }
      }
media=alt/mulheres;     
printf("A menor altura do grupo:%.2f\n",menor);
printf("A maior altura do grupo:%.2f\n",maior);
printf("A media de altura das mulheres:%.2f\n",media);
printf("O numero de homens:%i\n",homens);

getch();
}
