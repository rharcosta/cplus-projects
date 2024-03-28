#include<stdio.h>
#include<conio.h>

main()
{
    float a,b;
    printf("First number: ");
    scanf("%f",&a);
    printf("Second number: ");
    scanf("%f",&b);
    if (a > b)
        printf("Result: %.2f < %.2f", b, a);
    else
        printf("Result: %.2f < %.2f", a, b);
    getch();
}
