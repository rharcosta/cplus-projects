#include<stdio.h>
#include<conio.h>

main()
{
    float A, B, C, D, E, F;
    printf("This program calculates if the values entered form a triangle\n")
    printf("First value: ");
    scanf("%f",&A);
    printf("Second value: ");
    scanf("%f",&B);
    printf("Third value: ");
    scanf("%f",&C);

    D = A+B;
    E = B+C;
    F = A+C;

    if ((A<=E)&&(B<=F)&&(C<=D))
        printf("It is a triangle!\n");
    if ((A==B) && (B!=C)||(A==C) && (C!=B)||(B==C) && (C!=A))
        printf("O triangulo eh isosceles");
    if ((A!=B) && (B!=C))
        printf("O triangulo eh escaleno");
    if ((A==B) && (B==C) && (A==C))
        printf("O triangulo eh equilatero");
    else
        printf("It is not a triangle!\n");

    getch();
}


