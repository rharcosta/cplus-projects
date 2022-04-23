/*Faça um programa com Switch-case com as seguintes opções
       1- Potência (entre com base e potência)
       2- Raiz (entre com o nº)
       3- Porcentagem (entre com o valor e porcentagem)
       4- Idade (entre com 2 idades, exiba a maior)
       5- Fim*/
#include <stdio.h>
#include<conio.h>
#include <math.h>
main()
{
      float b,c,d,e,x;
      int a;
      do{
      puts("\n\nMenu\n");
      puts("1- Potencia\n"); 
      puts("2- Raiz\n"); 
      puts("3- Porcentagem\n");
      puts("4- Idade\n");
      puts("5- Fim\n");
      printf("Entre com o numero:\n");
      scanf("%i",&a);
      switch (a)
      { 
      case 1: printf("Entre com a base:\n\n");
              scanf("%f",&b);
              printf("Entre com a potencia:\n\n");
              scanf("%f",&c);
              x=pow(b,c);
              printf("O valor da potencia eh %.2f",x);break;
      case 2: printf("Entre com o numero da raiz:\n\n");
              scanf("%f",&e);
              x=sqrt(e);
              printf("O valor da raiz eh %.2f",x);break;
      case 3: printf("Entre com um valor:\n\n");
              scanf("%f",&b);
              printf("Entre com a porcentagem, digitando 0. e a porcentagem desejada:\n");
              scanf("%f",&c);
              x=b*c;
              d=x-b;
              printf("O valor da porcentagem eh %.2f",d);break;
      case 4: printf("Entre com a idade do primeiro participante:\n\n");
              scanf("%f",&b);
              printf("Entre com a idade do segundo participante:\n\n");
              scanf("%f",&c);
      if (b>c)
              printf("O primeiro participante eh maior que o segundo\n\n");
      if (c>b)
              printf("O segundo participante eh maior que o primeiro\n\n");break;
      case 5: printf("Fim\n");
              printf("Digite Enter para sair...");break;
      default:if (a!=5)printf("Opcao invalida\n\n");break;
      }
      }while(a!=5);

getch();
}
