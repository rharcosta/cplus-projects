/*Pgm q informa o estado civil com o if else*/
#include<stdio.h>
#include<conio.h>
main()
{
      char a,S,C,D,V;
      printf("Informe seu estado civil:\n ");
      scanf("%c",&a);
                     if (a=='S')
                        printf("Solteiro");
                         else if (a=='C')
                         printf("Casado");
                              else if (a=='D')
                              printf("Divorciado");
                                   else if (a=='V')
                                   printf("Viuvo");
                                        else 
                                        ("invalido");
getch();
}
      
