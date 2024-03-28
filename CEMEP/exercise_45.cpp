/*Foram entrevistados 6 pessoas que forneceram:
-Sexo(1-F/2-M)
-Resposta (1-Gostou/2-Não gostou)
Calcule e exiba:
a)O numero de pessoas que responderam sim
b)O numero de pessoas que responderam não
c)O numero de mulheres que responderam sim
d)A porcentagem de homens que responderam não entre todos os homens analisados*/
#include<stdio.h>
#include<conio.h>
main()
{
	int cont,sexo,resposta,respsim=0,respnao=0,resp1=0,resp2=0,porc=0;
	printf("Bem-Vindo ao portal de opinioes sobre o CEPA\n");
    for (cont=1;cont<=6;cont++)
	{
	printf("Digite seu sexo [1] Feminino [2] Masculino:\n");
	scanf("%i",&sexo);
	                  while((sexo<1)||(sexo>2))
	                  {
	                  printf("Numero Invalido... Digite novamente\n");
              	      scanf("%i",&sexo);
                      }
	printf("Digite sua resposta [1] Se gostou [2] Se nao gostou:\n");
	scanf("%i",&resposta);
                      while((resposta<1)||(resposta>2))
	                  {
                      printf("Numero Invalido... Digite novamente\n");
                  	  scanf("%i",&resposta);
                      }
    if (resposta==1)
    respsim=respsim+1;
    if (resposta==2)
    respnao=respnao+1;
    if ((resposta==1)&&(sexo==1))
    resp1=resp1+1;
    if ((resposta==2)&&(sexo==2))
    resp2=resp2+1;
}   
porc=(resp2*100)/6;	
printf("Responderam sim:%i\n",respsim);	
printf("Responderam nao:%i\n",respnao);
printf("O numero de mulheres que responderam sim:%i\n",resp1);
printf("A porcentagem de homens que responderam nao entre todos os homens analisados:%i\n",porc);
	
getch();
}

