/*Monte um trecho de pgm que leia o nome, altura e sexo de 3 pessoas. 
Exiba a média das alturas*/
#include<stdio.h>
#include<conio.h>
main()
{
	char nome,sexo;
	float a,b,altura,alturafinal;
	altura= 0;
	b=0;
	a=1;
	while (a<=3)
	{
	
    printf("\nDigite seu nome:\n");
	scanf("%s",&nome);
	printf("\nDigite seu sexo (F para feminino e M para masculino):\n");
	scanf("%s",&sexo);
	printf("\nDigite a altura:\n");
    scanf("%f",&altura);
    b=b+altura;
	a++;
	}
	alturafinal=b/3;
	printf("A media das alturas eh igual a: %.2f",alturafinal);
	
getch();
}
