/*Entre com 10 idades de uma turma e apresente a média das idades*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,idade;
	printf("Boa tarde, Sr(a)\n");
	idade=0;
	a=0;
	b=0;
	while(a<=10)
	{
	printf("\nDigite sua idade:\n");
	scanf("%d",&idade);
	b=b+idade;
	a++;

    }
    c=b/10;
    printf("O media das idade e igual a:%d",c);
getch();	
	
}
