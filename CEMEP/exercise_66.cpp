/*A seguir um exemplo em que n�o se utiliza o contador como forma de controle do 
numero de vezes de uma determinada rotina em uma estrutura de repeti��o. 
Considere que o usu�rio encena o processamento segundo a sua vontade.*/ 
/* Loopping do tipo while vers�o 2*/

#include<stdio.h>
#include<conio.h>
main()
{
      int A,B,R,RESP=1;
      do 
      {
          printf("\n\n Entre com A:");
          scanf ("%i",&A);
          printf("\n\n Entre com B:");
          scanf ("%i",&B);
          R=A+B;
          printf("\n O resultado corresponde a: %i",R);
          printf("\n Deseja continuar?");
          printf("\n Tecle [1] para sim/ [2] para nao:");
          scanf ("%i",&RESP);
      }
      while (RESP==1);
}   
