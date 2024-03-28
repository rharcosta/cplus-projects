/*Dado um numero inteiro representando a placa de um veículo, informe em que dia da semana esse veículo está no rodizio*/
/*Embora o usuário digite um numero de placa composto de quatro dígitos, para determinar o dia do rodízio correspondente, o algoritmo precisa verificar apenas o dígito final desse numero.
 Para isso, basta dividir o numero da placa por 10 e tomar o resto dessa divisão, pois sempre que dividimos um numero por 10, o resto da divisão é igual ao ultimo dígito do numero. 
 A operação que dá o resto de uma divisão inteira é indicada pelo símbolo %  */
/*Rodizio com switch*/
#include<stdio.h>
#include<conio.h>
main()
{
      int a,b;
      printf("Digite o ultimo digito da placa:\n");
      scanf("%i",&a);
      b=a%10;
      printf("Rodizio\n");
      switch (b)
      {
             case 1: case 2: printf("Segunda-feira\n");break;
             case 3: case 4: printf("Terca-feira\n");break;
             case 5: case 6: printf("Quarta-feira\n");break;
             case 7: case 8: printf("Quinta-feira\n");break;
             case 9: case 0: printf("Sexta-feira\n");break;
             default: printf("Erro");
      }
getch();
}
       
