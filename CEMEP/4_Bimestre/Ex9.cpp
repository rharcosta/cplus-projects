/*9)Faça um pgm que leia um vetor N(2). Troque o valor, o primeiro elemento pelo segundo, exibindo o vetor N modificado.*/
#include<stdio.h>
#include<conio.h>
main()
{
      int cont;
      int vetor[2];
      
      for(cont=1;cont<=2;cont++)
      {
          printf("Digite o numero %d: ",cont);
          scanf("%d",&vetor[cont]);
      }
      
      printf("valores trocados:\n");
      for(cont=1;cont<=1;cont++)
      {
          printf("Numero 1: %d\n",vetor[cont+1]);
          printf("Numero 2: %d\n",vetor[cont]);
      }
 
getch();
}     
