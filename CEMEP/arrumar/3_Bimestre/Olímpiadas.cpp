/*Em uma pesquisa sobre o que as pessoas achavam sobre a atuação dos brasileiros na olimpiada
Rio 2016, foram entrevistados 5 pessoas que forneceram o:
 -sexo (1 para feminino e 2 para masculino) e a 
 -resposta (1 para se gostaram ou 2 para não gostaram).
 Calcule e exiba:
 a)O numero de pessoas que responderam sim; 
 b)O numero de pessoas que responderam não;
 c)O numero de mulheres que responderam sim;
 d)A porcentagem de homens que responderam não entre todos os homens analisados*/
 
 #include<stdio.h>
 #include<conio.h>
 main()
{
	int a,b,c,d,e,sexo,resposta,porc;
	printf("Bem-vindo a sede de pesquisas sobre as olimpiadas");
	a=1;
	b=0;
	c=0;
	d=0;
	e=0;
	sexo=0;
	resposta=0;
	while(a<=5)
	{
		printf("\nDigite seu sexo (1-FEMININO 2-MASCULINO)\n");
		scanf("%d",&sexo);
		printf("\nVoce gostou da atuacao dos brasileiros nas Olimpiadas Rio 2016?\n");
		printf("\n1-SE GOSTOU 2-SE NAO GOSTOU\n");
		scanf("%d",&resposta);

	if (resposta==1)
	b=b+resposta;
    
    if (resposta==2)
    c=c+resposta; 

    if ((sexo==1) && (resposta==1))
    d=d+resposta;
	
    if ((sexo==2) && (resposta==2))
    e=e+resposta;
    
    a++;
    }
    
    porc=(e*100)/c;
    
    printf("\nO numero de pessoas que disseram sim foi %i", b);
    printf("\nO numero de pessoas que disseram nao foi %i",c);
    printf("\nO numero de mulheres que votaram sim foi %i",d);
    printf("\nA porcetagem de homens que votaram nao foi %i porcento",e);
    
getch();
}	
 
