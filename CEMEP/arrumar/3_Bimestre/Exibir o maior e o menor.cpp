/*Dado um conjunto de números, exiba o maior e o menor*/
#include<stdio.h>
#include<conio.h>
main()
{
      int numero,numero1,a,b,menor,maior;
      numero=0;
      a=1;
      b=0;
      maior=0;
      menor=9990000;
      numero1=0;
      printf("Quantos numeros voce deseja inserir?\n\n");
      scanf("%d",&numero);
      
      while (a<=numero)
      {
      printf("Insira:\n\n");
      scanf("%d",&numero1);
      if (numero1<menor)
      menor=numero1;
      if (numero1>maior)
      maior=numero1;
       a++;
      
      }
     
     printf("O menor numero e: %i\n\n",menor);
     printf("O maior numero e: %i\n\n",maior);
      
getch();
}
