#include<stdio.h>
#include<conio.h>
main()
{
    float A,B;
    printf("Value of A: ");
    scanf("%f",&A);
    printf("Value of B: ");
    scanf("%f",&B);
    if(A > B)
        printf("%f is bigger!", A);
    else
        printf("%f is bigger!", B);
    if(A == B)
        printf("They are the same!");
    getch();
}
