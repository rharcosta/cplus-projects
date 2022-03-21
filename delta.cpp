#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
    float a,b,c,delta,x1,x2;
    printf("First value: ");
    scanf("%f",&a);
    printf("Second value: ");
    scanf("%f",&b);
    printf("Third value: ");
    scanf("%f",&c);
    delta = (b*b) -4*a*c;
    printf("Delta %.2f\n",delta);
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    printf("X1: %.2f\n",x1);
    printf("X2: %.2f\n",x2);
    getch ();
}
