/*Dado um numero inteiro representando a placa de um ve�culo, informe em que dia da semana esse ve�culo est� no rodizio*/
/*Embora o usu�rio digite um numero de placa composto de quatro d�gitos, para determinar o dia do rod�zio correspondente, o algoritmo precisa verificar apenas o d�gito final desse numero.
 Para isso, basta dividir o numero da placa por 10 e tomar o resto dessa divis�o, pois sempre que dividimos um numero por 10, o resto da divis�o � igual ao ultimo d�gito do numero. 
 A opera��o que d� o resto de uma divis�o inteira � indicada pelo s�mbolo %  */
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
       
