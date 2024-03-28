#include<stdio.h>
#include<conio.h>
main()
{
      float a,b,c,x;
      printf("Nº:");
      scanf("%f %f %f", &a, &b, &c);
      if (a>b)
      {
              x=a;
              a=b;
              b=x;
      }
      if(a>c)
      {
             x=a;
             a=c;
             c=x;
      }
      if(b<c)
      printf("Ordem: %1.f,%1.f,%1.f\n",a,b,c);
      else
      printf("ordem: %1.f,%1.f,%1.f\n",a,c,b);
      getch();
      }
