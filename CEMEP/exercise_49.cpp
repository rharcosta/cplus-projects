/*Dado um conjunto de numero exiba o maior do menor*/
#include<stdio.h>
#include<conio.h>
main()
{
	int cont,a,numero,maior=0,menor=9999000;
printf("Informe a quantidade de numeros para o programa:\n");
scanf("%i",&a);
for (cont=1;cont<=a;cont++)
{
printf("Informe o numero:\n");
scanf("%i",&numero);
if (numero>maior)
maior=numero;
if (numero<menor)
menor=numero;
	
}

printf("Maior:%i\n",maior);
printf("Menor:%i\n",menor);
getch();	
		
	
}
