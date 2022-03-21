#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    float a,b,c,d,x;
    printf("A value: ");
    scanf("%f",&a);
    printf("B value: ");
    scanf("%f",&b);
    c = pow(a,2);
    d = pow(b,2);
    x = sqrt((c+d)/2);
    printf("Result %.2f", x);
    getch();
}

