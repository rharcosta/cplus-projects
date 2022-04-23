/*Dado o nome e o salário de 5 funcionários exiba os seguintes dados: 
1)Quantos possuem o salário acima de 500
2)A média dos salários dos funcionários*/

#include<stdio.h>
#include<conio.h>
main()
{
	int cont,salario,acima=0,salario2=0,media;
	char nome;
	for (cont=1;cont<=5;cont++)
	{
	printf("Nome do funcionario:\n");
	scanf("%s",&nome);
	printf("Salario do funcionario:\n");
	scanf("%i",&salario);
	if(salario>=500)
    acima=acima+1;
    salario2=salario2+salario;
	}
	
media=salario2/5;
printf("Possuem salario acima de R$500,00:%i\n",acima);
printf("A media:%i",media);		
	
getch();	
}
