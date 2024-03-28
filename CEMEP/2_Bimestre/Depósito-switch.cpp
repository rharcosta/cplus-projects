/*Pgm caixa eletronico*/
#include<stdio.h>
#include<conio.h>
main()
{
      float s=100000, v;
      int op;
      do{
      puts("\n1-Deposito");
      puts("2-Saque");
      puts("3-Saldo");
      puts("4-Sair");
      printf("Entre com a opcao: ");
      scanf("%d",&op);
      switch (op)
      {
      case 1: printf("\nValor do deposito: ");
                  scanf("%f",&v);
                  s=s+v;break;
      case 2: printf("\nValor do saque: ");
                  scanf("%f",&v);
                  s=s-v;break;
      case 3: printf("\nSaldo atual=R$%.2f\n",s);break;
      case 4: printf("\nPressione enter para sair...");break;
      default: if (op!=4) puts ("\nOpcao invalida!");
      }
      }while(op!=4);
getch();
}
