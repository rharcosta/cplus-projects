
/*Exibir o maior número de 5 números*/
#include<stdio.h>
#include<conio.h>
main()
{
	int numero,a,maior,numerototal;
	numero=0;
	a=1;
	maior=0;
	while (a<=5)
	{

	printf("\nDigite um numero:\n");
	scanf("%i",&numero);
	a++;
    if (maior<=numero)
    maior=numero;
    }
    printf("O maior numero e:%i",maior);
    printf("\nPressione qualquer tecla para sair\n");
getch();
}
