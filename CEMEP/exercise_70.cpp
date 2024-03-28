/*2º Resolução do ex*/
#include<stdio.h>
#include<conio.h>
main()
{
      int maior,segundomaior,num,cont=3;
      printf("Digite o primeiro numero:\n");
      scanf("%i",&maior);
      printf("Digite o segundo numero:\n");
      scanf("%i",&num);
      
      if (maior>num)
         segundomaior=num;
         
      else
      { 
          segundomaior=maior;
          maior=num;
      }
      while (cont<=10)
      {
            printf("Digite o numero %i:", cont);
            scanf("%i",&num);
      if (num>maior)
      {
         segundomaior=maior;
         maior=num;
      }
      else 
      if (num>segundomaior)
      segundomaior=num;
      
      cont++;
      }
 getch();
} 
      
          
      
