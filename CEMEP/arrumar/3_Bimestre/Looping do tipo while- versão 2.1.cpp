/*A seguir um exemplo em que não se utiliza o contador como forma de controle do 
numero de vezes de uma determinada rotina em uma estrutura de repetição. 
Considere que o usuário encena o processamento segundo a sua vontade.*/ 
/* Loopping do tipo while versão 2*/

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
