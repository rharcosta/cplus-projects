/*3)Escreva um pgm que receba um conjunto de valores inteiros e positivos, calcule e exiba o maior e o menor valor do conjunto.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
      int qtd,cont,numero,maior=0,menor=999999,maior1=0,menor1=0;
      printf("Quantos numeros deseja digitar?\n");
      scanf("%d",&qtd);
      
      for(cont=1;cont<=qtd;cont++)
      {
      printf("Digite o numero:\n");
      scanf("%d",&numero);
      
      if (numero>maior)
      maior=numero;
      if (numero<menor)
      menor=numero;
      }
      
printf("O maior numero:%d\n",maior);
printf("O menor numero:%d\n",menor);      
getch();
}
