/*Looping do tipo while*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
      int A,B,R,I;
      I=1;
      while (I<=5) 
      {
      printf("\n\nEntre com A:");
      scanf("%i",&A);            
      printf("\n\nEntre com B:");
      scanf("%i",&B);
      R=A+B;
      printf("\n O resultado corresponde a: %i",R);
      I=I+1;
      }
getch();
}     
