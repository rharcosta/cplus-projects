/*Exibir o maior numero, o segundo maior e o menor numero*/
#include<stdio.h>
#include<conio.h>
main()
{
      int numero,b,c,x,
      a=1,
      menor=9999,
      maior=0,
      segundomaior=0;
      
      printf("Voce pode inserir um numero igual ou maior que 3.\n");
      printf("Digite quantas vezes voce deseja:\n");
      scanf("%i",&x);
      
      while (a<=x)
      {
            printf("Insira:\n");
            scanf("%i",&numero);
      
      if (numero>maior)
      maior=numero;
      
      if (numero<menor)
      menor=numero;
      
      if ((numero<maior) && (numero>menor))
      segundomaior=numero;
      a++;   
      }
      
      printf("\nO maior numero: %.2i",maior);
      printf("\nO menor numero: %.2i",menor);
      printf("\nO segundo maior numero: %.2i",segundomaior);
        
getch();
}
            
