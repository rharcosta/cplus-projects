/*Ler um valor num�rico inteiro que n�o seja negativo (N�o pode aceitar negativo!). 
Qualquer outro valor deve apresentar a mensagem "Valor inv�lido".
Se o valor estiver correto, apresentar a mensagem "Valor v�lido!" e colocar junton com a mensagem o valor fornecido.*/
#include<stdio.h>
#include<conio.h>
main()
{
      int a;
      printf("Entre com um valor:\n");
      scanf("%i",&a);
      if(a<0)
      printf("Valor %.2i invalido",a);
      else
      printf("Valor %.2i valido",a);
getch();
} 
