/*Em uma promoção de uma loja, todo mês é destinado uma quantia de dinheiro para sorteio entre seus clientes.
Desse dinheiro, 60% vai para o ganhador, 30% para o segundo colocado e o restante para o terceiro.
Receba o valor destinado para a promoção e calcule os valores que os premiados ganharão.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
      float a,b;
      printf("Bem vindo ao calculo do sorteio\n");
      printf("Insira a quantia de dinheiro destinado para os tres colocados:\n");
      scanf("%f",&a);
      b=(a*60)/100;
      printf("O valor para o primeiro colocado eh de: %.2f\n",b);
      b=(a*30)/100;
      printf("O valor para o segundo colocado eh de: %.2f\n",b);
      b=(a*10)/100;
      printf("O valor para o terceiro colocado eh de: %.2f\n",b);
     printf("Pressione ENTER para sair");
getch();
}
