/*Exercícios
Dadas as notas dos alunos de uma turma, informe a média da turma.*/
#include<stdio.h>
#include<conio.h>
main()
{
      int a,qtd;
      float nota,media,media2;
      printf("Informe a quantidade de alunos:\n");
      scanf("%i",&qtd);
      for (a=1;a<=qtd;a++)
      {
      printf("Informe a nota do aluno:\n");
      scanf("%f",&nota);
      media=media+nota;
      }
      media2=media/qtd;
      printf("Media da sala: %.2f\n",media2);
getch();
}      
