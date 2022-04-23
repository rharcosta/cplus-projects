/*Looping do tipo while versão 2*/
#include<stdio.h>
#include<conio.h>
main()
{
	int A,B,R,RESP=1;
	while(RESP==1)
	{
		printf("\n\nEntre com A:");
		scanf("%i",&A);
		printf("\n\nEntre com B:");
		scanf("%i",&B);
		R=A+B;
		printf("\n O resultado corresponde a: %i",R);
		printf("\n\nDeseja continuar?");
		printf("\n Tecle [1] Para SIM e [2] Para NAO:");
		scanf("%i",&RESP);
		
	}
getch();
}
