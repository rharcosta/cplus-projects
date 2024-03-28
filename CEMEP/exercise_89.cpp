/*6)Faça um pgm que receba duas notas de 6 alunos, calcule e exiba:
a)A média entre essas 2 notas de cada aluno;
b)A mensagem de acordo com a tabela abaixo:

Média		Mensagem
0-----5		reprovado
5-----7		recuperação
7-----10	aprovado

c)O total de alunos aprovados e o total de alunos reprovados;
d)A média geral da classe, isto é, a média entre as médias dos alunos.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
      int cont,aprovados=0,reprovados=0;
      float nota1,nota2,media,media2,mediageral;
      
      for(cont=1;cont<=6;cont++)
      {
           printf("Entre com a Primeira nota:\n");
           scanf("%f",&nota1);
                              while ((nota1<0)||(nota1>10))
                              {
                                    printf("NOTA INVALIDA! DIGITE NOVAMENTE:\n"); 
                                    scanf("%f",&nota1);
                              }          
           printf("Entre com a Segunda nota:\n");
           scanf("%f",&nota2);
                              while ((nota2<0)||(nota2>10))
                              {
                                    printf("NOTA INVALIDA! DIGITE NOVAMENTE:\n"); 
                                    scanf("%f",&nota2);
                              }  
media=(nota1+nota2)/2;
printf("A media do aluno:%.2f",media);

                   if((media>=0)&&(media<=5))
                   {
                      reprovados++;
                      printf("\nREPROVADO\n"); 
                   }                   
                   if((media>=5)&&(media<=7))
                      printf("\nRECUPERACAO\n");   
                   
                   if((media>=7)&&(media<=10))
                   {
                      aprovados++;
                      printf("\nAPROVADO\n");
                   }      
media2=media2+media;     
      }   
mediageral=media2/6;
printf("Total de alunos aprovados:%i\n",aprovados);  
printf("Total de alunos reprovados:%i\n",reprovados);        
printf("A Media geral dos alunos:%.2f\n",mediageral);
getch();
}      
