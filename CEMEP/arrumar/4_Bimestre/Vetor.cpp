/*Este pgm exibe um vetor em ordem crescente*/
#include<stdio.h>
#include<stdlib.h>
main()
{
int cont;
int vet [5]; 
for (cont=0; cont<5; cont++)
{
printf ("Entre com um numero:\n");
scanf ("%i",&vet[cont]); 
}
for (cont=0; cont<5; cont++)
	{
	printf ("O numero armazenado no vetor %i=%i \n", cont+1, vet [cont]);
	}
system ("Pause");
};
