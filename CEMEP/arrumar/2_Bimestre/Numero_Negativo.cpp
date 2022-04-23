/*Ler um valor numérico inteiro que não seja negativo (Não pode aceitar negativo!). 
Qualquer outro valor deve apresentar a mensagem "Valor inválido".
Se o valor estiver correto, apresentar a mensagem "Valor válido!" e colocar junton com a mensagem o valor fornecido.*/
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
