/*Em uma eleição presidencial existem 4 candidatos. Estes são informados através de códigos.
Os códigos utilizados são: 1,2,3,4= Votos para os respectivos candidatos
5= Voto nulo
6= Voto em Branco
Calcule e exiba:
a)Total de votos para cada candidato;
b)Total de votos nulos;
c)Total de votos em branco;
d)Porcentagem de votos nulos sobre o total de votos;
e)Porcentagem de votos em brancos sobre o total de votos;
Para finalizar o conjunto de votos, tem-se o valor zero. */

#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
      float conjunto=1,
      candidato1,candidato2,candidato3,candidato4,
      votos=0,total_votos=0,
      total_nulos=0,total_brancos=0,
      porc_nulos=0,
      porc_brancos=0;
      
      while(conjunto!=0)
      {
             puts("1,2,3,4 Votos para os respectivos candidatos");
             puts("5 Voto nulo");
             puts("6 Voto em Branco");
             printf("Voto:\n");
             scanf("%f",&votos);
             total_votos=votos;
             
      if(votos==1)
      candidato1++;
      if(votos==2)
      candidato2++;
      if(votos==3)
      candidato3++;
      if(votos==4)
      candidato4++;
      if(votos==5)
      total_nulos++;
      if(votos==6)
      total_brancos++;
      }
     porc_nulos=(total_nulos*100)/total_votos;
     porc_brancos=(total_brancos*100)/total_votos; 
      
      
printf("O total de votos foi igual a: %f\n",total_votos);
printf("O total de votos para o primeiro candidato foi igual a: %f\n",total_votos);
printf("O total de votospara o segundo candidato foi igual a: %f\n",total_votos);
printf("O total de votos para o terceiro candidato foi igual a: %f\n",total_votos);
printf("O total de votos para o quarto candidatofoi igual a: %f\n",total_votos);
printf("O total de votos nulos foi igual a: %f\n",total_nulos);
printf("O total de votos em branco foi igual a:%f\n",total_brancos);
printf("A porcentagem dos votos nulos:%f\n",porc_nulos);
printf("A porcetagem dos votos brancos:%f\n",porc_brancos);

getch();
}
