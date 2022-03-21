/*x= Raiz(a²+b²)/2 */

#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
    float x, a, b, c, d, e;
    printf("A value: ");
    scanf("%f",&a);
    printf("B value: ");
    scanf("%f",&b);
    c = a*a;
    d = b*b;
    e = (c+d)/2;
    x = sqrt(e);
    printf("Value: %.2f", x);
    getch();
}


