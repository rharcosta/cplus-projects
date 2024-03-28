#include <stdio.h>
#include <conio.h>
int 
main ( )
{
  int valor;
 
  printf ("Digite um valor de 1 a 7: ");
  scanf("%d", &valor);
 
  if (valor == 1)
       printf ("Domingo. O dia permanecera 30 Graus Tempo nublado...\n");
  else
     if (valor == 2)
       printf ("Segunda. O dia permanecera 29 Graus Tempo nublado...\n");
     else
       if (valor == 3)
          printf ("Terça. O dia permanecera 12 Graus Previsao de chuva...\n");
       else
         if (valor == 4)
            printf ("Quarta. O dia permanecera 15 Graus Previsao de chuva...\n");
         else
           if (valor == 5)
             printf ("Quinta. O dia permanecera 22 Graus Tempo insolarado...\n");
           else
             if (valor == 6)
               printf ("Sexta. O dia permanecera 23 Graus Tempo insolarado...\n");
             else
               if (valor == 7)
                  printf ("Sabado. O dia permanecera 20 Graus Chuva forte...\n");
               else
                  printf ("Valor invalido!\n");
getch();
}
