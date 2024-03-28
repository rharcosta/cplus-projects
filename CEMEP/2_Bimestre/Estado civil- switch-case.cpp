/*Pgm com as duas estruturas (if...else if... e switch-case)*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
      char a,s,c,d,v;
      printf("Informe seu estado civil:\n");
      scanf("%c",&a);
      
            switch(toupper(a))
      {
               case 'S': printf("Solteiro\n");break;
               case 'C': printf("Casado\n");break;
               case 'D': printf("Divorciado\n");break;
               case 'V': printf("Viuvo\n");break;
               default: printf("Invalido\n");break;
      }
getch();
}
