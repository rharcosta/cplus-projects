/*2)Escreva um programa que receba a idade de 6 pessoas, calcule e exiba:
a)	A quantidade de pessoas em cada faixa etária;
b)	A porcentagem de cada faixa etária em relação ao total de pessoas.

As faixas etárias são: 

1------15 anos
16----30 anos
31----45 anos
46----60 anos
>=61 anos*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
     int a,idade,idade1=0,idade2=0,idade3=0,idade4=0,idade5=0;
     float porc1=0,porc2=0,porc3=0,porc4=0,porc5=0;

 	 for (a=1;a<=6;a++)  
     {
         printf("Digite a idade:");
  		 scanf("%i",&idade);
		
	     if ((idade>=1) and (idade<=15))
	       idade1=idade1+1;
	     if ((idade>=16) and (idade<=30))
		  idade2=idade2+1; 
	     if ((idade>=31) and (idade<=45))
	       idade3=idade3+1;
		 if ((idade>=46) and (idade<=60))
	       idade4=idade4+1;
	  	 if (idade>=61)
	       idade5=idade5+1;
	
     }
	
	porc1=(idade1*100)/6;
	porc2=(idade2*100)/6;
	porc3=(idade3*100)/6;
	porc4=(idade4*100)/6;
	porc5=(idade5*100)/6;
	
        printf("A Qtd de pessoa na primeira faixa etaria:%i\n",idade1);
        printf("A Qtd de pessoa na segunda faixa etaria:%i\n",idade2); 
	    printf("A Qtd de pessoa na terceira faixa etaria:%i\n",idade3);
	    printf("A Qtd de pessoa na quarta faixa etaria:%i\n",idade4);
	    printf("A Qtd de pessoa na quinta faixa etaria:%i\n\n",idade5);
	    printf("A porcentagem da primeira faixa etaria:%.2f\n",porc1);
        printf("A porcentagem da segunda faixa etaria:%.2f\n",porc2);
        printf("A porcentagem da terceira faixa etaria:%.2f\n",porc3); 
        printf("A porcentagem da quarta faixa etaria:%.2f\n",porc4);
        printf("A porcentagem da quinta faixa etaria:%.2f\n",porc5);
        
getch();
}
 
