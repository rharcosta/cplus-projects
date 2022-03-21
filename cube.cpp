#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
    float a,b;
    printf("Number: ");
    scanf("%f", &a);
    b = cbrt(a);
    printf("Cube root value: %.2f", b);
    getch();
}
