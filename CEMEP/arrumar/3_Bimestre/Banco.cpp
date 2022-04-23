/*Banco*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <stdlib.h>
main()
{
      float s=10000, v;
      int a;
      do{   
      puts("* * * * * * * * * *\n"); 
      puts("*    1-Saldo      *\n");
      puts("*    2-Deposito   *\n");
      puts("*    3-Saque      *\n");
      puts("*    4-Sair       *\n"); 
      puts("* * * * * * * * * *\n"); 
      printf("Digite um numero conforme a tabela:\n");
         scanf("%i",&a);
         
       if (a==1)
         printf("Valor do saldo igual a R$%.2f\n",s);
       if (a==2)
       {
         printf("Valor do deposito:\n");
      scanf("%f",&v);
      s=(s+v);
      }
       if (a==3)
       {
         printf("Que valor o Sr(a) deseja retirar?\n");
         scanf("%f",&v);
      s=s-v;
      }
       if (a==4)
         printf("Pressione Enter para sair...");
       if (a>4) puts ("\nOpcao invalida!");
      
      
      }while(a!=4);
getch();
}
      
      
