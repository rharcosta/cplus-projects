#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
    float imc, peso, altura, a;
    printf("Weight: ");
    scanf("%f",&peso);
    printf("Height: ");
    scanf("%f",&altura);
    a = pow(altura,2);
    imc = peso/a;
    printf("BMI %.2f \n", imc);
    if (imc > 30)
        printf("You're overweight!");
    else
        printf("Your BMI is normal!");
    getch();
}
