#include <stdio.h>
#include <conio.h>
main() 
{
  int valor;
 
  printf ("Digite um valor de 1 a 7: ");
  scanf("%d", &valor);
 
  switch ( valor )
  {
     case 1 :
       printf ("Domingo. O dia permanecera 30 Graus Tempo nublado...\n");
     break;
 
     case 2 :
       printf ("Segunda. O dia permanecera 29 Graus Tempo nublado...\n");
     break;
 
     case 3 :
        printf ("Terça. O dia permanecera 12 Graus Previsao de chuva...\n");
     break;
 
     case 4 :
        printf ("Quarta. O dia permanecera 15 Graus Previsao de chuva...\n");
     break;
 
     case 5 :
        printf ("Quinta. O dia permanecera 22 Graus Tempo insolarado...\n");
     break;
 
     case 6 :
        printf ("Sexta. O dia permanecera 23 Graus Tempo insolarado...\n");
     break;
 
     case 7 :
        printf ("Sabado. O dia permanecera 20 Graus Chuva forte...\n");
     break;
 
     default :
       printf ("Valor invalido!\n");
} 
 
  getch();
}
