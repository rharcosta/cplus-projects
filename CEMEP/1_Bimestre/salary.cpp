#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

main()
{
    float A, R, V;
    char C[30];
    printf("Name: ");
    scanf("%s",&C);
    printf("First salary: ");
    scanf("%f",&A);
    if (A < 800)
    {
        V = A*1.03;
        printf("The salary is lower than 800.\n");
        printf("Readjustment: %.2f",V);
    }
    else
        printf("No readjustment!");
    getch();
}
