/*Looping do tipo while versão 3*/
#include<stdio.h>
#include<conio.h>
main()
{
	int contb;
	float media,contmedia,conta;
	conta=0;
	media=0;
	contb=1;
	while (contb<=5)
	{
		printf("\nDigite media:\n");
		scanf("%f",&media);
		conta=conta+media;
		contb++;
	}
	contmedia=conta/5;
	printf("\nMedia da turma:%.2f\n",contmedia);
	getch();
}
