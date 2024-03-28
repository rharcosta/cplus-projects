/*Receba um numero e informe se ele é primo*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
      int a,b;
      printf("Digite um numero inteiro e positivo:\n");
      scanf("%i",&a);
      b=a/1;
      b=a/a;
      if (b==0)
      printf("Valor %i eh Primo\n",b);
      else ("O valor %i nao eh primo\n",b);
      printf("Pressione enter para sair...");
getch();
}
