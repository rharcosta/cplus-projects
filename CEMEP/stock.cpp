#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    float a;
    printf("Stock value: ");
    scanf("%f",&a);
    if (a > 100)
        if (a < 500)
            printf("Replenish stock!");
    if (a < 100)
        printf("Low stock!");
    if (a > 500)
        printf("No problem!");
    getch();
}
