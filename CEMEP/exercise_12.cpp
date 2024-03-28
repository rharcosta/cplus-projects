#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    char nome[30];
    float peso, pg, r;
    printf("Name: ");
    scanf("%s",&nome);
    printf("Weight: ");
    scanf("%f",&peso);
    pg = peso*1000;
    printf("Weight in grams: %.2f\n",pg);
    r = peso*1.05;
    printf("If the person put on 5 percent their weight will be: %.2f", peso);
    getch();
}

