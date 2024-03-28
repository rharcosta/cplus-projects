#include<stdio.h>
#include<conio.h>
main()
{
      int pontos,alunos,a=1,primeira,segunda,terceira,quarta,total;
      printf("Pgm que calcula a pontuacao final dos alunos\n\n");
      printf("Total de pontos para ser aprovado:\n");
      scanf("%i",&pontos);
      printf("Alunos:\n");
      scanf("%i",&alunos);
      
      
        do
      {
                         
      printf("Primeira Media:\n");
      scanf("%d",&primeira);
         while ((primeira>10)||(primeira<0))
         {
         printf("Erro! Digite novamente\n");
         scanf("%d",&primeira);
         }
      printf("Segunda Media:\n");
      scanf("%d",&segunda);
         while ((segunda>10)||(segunda<0))
         {
         printf("Erro! Digite novamente\n");
         scanf("%d",&segunda);
         }   
      printf("Terceira Media:\n");
      scanf("%d",&terceira);
         while ((terceira>10)||(terceira<0))
         {
         printf("Erro! Digite novamente\n");
         scanf("%d",&terceira);
         }
      printf("Quarta Media:\n");
      scanf("%d",&quarta);  
         while ((quarta>10)||(quarta<0))
         {
        printf("Erro! Digite novamente\n");
        scanf("%d",&quarta);  
         }
      total=primeira+segunda+terceira+quarta;     
                   
                   if (total>=pontos)
                      printf("Aluno Aprovado!\n");
                   else if(total<=pontos)
                      printf("Repetente!\n");                
      a++;
      }
       while(a<=alunos);
getch();
}
     
