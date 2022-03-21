#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
    float r, u;
    printf("Base: ");
    scanf("%f",&r);
    u = pow(r,5);
    printf("%.2f raised to fifth = %.2f", r, u);
    getch();
}
