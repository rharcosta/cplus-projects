/* dado 3 numeros coloque em ordem crescente */
#include <stdio.h>
#include <conio.h>
main()
{
      int a,b,c,d;
      printf("Informe o primeiro numero: "); scanf("%i",&a);
      printf("Informe o segundo numero: "); scanf("%i",&b);
      printf("Informe o terceiro numero: "); scanf("%i",&c);
      if((a<b)&&(a<c)&&(b<c)) 
        printf("Os numeros em ordem crescente sao: %i, %i, %i",a,b,c);
      else if((b<a)&&(b<c)&&(a<c))
        printf("Os numeros em ordem crescente sao: %i, %i, %i",b,a,c);
      else if((c<a)&&(c<b)&&(b<a))
        printf("Os numeros em ordem crescente sao: %i, %i, %i",c,b,a);  
      else if((c<a)&&(c<b)&&(a<b))
        printf("Os numeros em ordem crescente sao: %i, %i, %i",c,a,b);
      else if((a<b)&&(a<c)&&(c<b))
        printf("Os numeros em ordem crescente sao: %i, %i, %i",a,c,b);
      else if((b<a)&&(b<c)&&(c<a))
        printf("Os numeros em ordem crescente sao: %i, %i, %i",b,c,a);
      else 
      printf("Os numeros sao iguais");
      getch();
      }    
