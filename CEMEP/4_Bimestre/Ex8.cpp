/*8)Em um campeonato de futebol, cada time tem uma lista oficial de 23 jogadores. 
Cada time prepara uma lista contendo o peso e a idade de cada um dos seus jogadores. 
Os 40 times que participam do torneio enviam essas listas para o CPD da confederação. 
Faça um programa que apresente as seguintes informações:
a)O peso médio e a idade média de cada um dos times;
b)O peso médio e a idade média de todos os participantes.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
      int cont,cont2,idade,idade2;
      float peso,peso2,mediaidade,mediapeso,pesogeral,idadegeral,mediapg,mediaig;
 
for(cont=1;cont<=2;cont++)
{     
idade2=0;
peso2=0;
      for(cont2=1;cont2<=5;cont2++)
      {
         printf("\n\nJogador %i:\n\n",cont2);
         printf("Idade:");
         scanf("%d",&idade);
         idade2=idade2+idade;
         
         printf("Peso:");
         scanf("%f",&peso);
         peso2=peso2+peso;
      }
mediaidade=idade2/5;
mediapeso=peso2/5;

         printf("O peso medio dos participantes do time %i:%.2f\n",cont,mediaidade);
         printf("A idade media dos participantes do time %i:%.2f\n",cont,mediapeso);
pesogeral=pesogeral+peso2;
idadegeral=idadegeral+idade2; 

}
mediapg=pesogeral/(2*5);
mediaig=idadegeral/(2*5);
printf("O peso medio dos times%.2f\n",mediapg);
printf("A idade media dos times:%.2f\n",mediaig);

getch();
}
