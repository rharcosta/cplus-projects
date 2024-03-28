/*Dada a idade de um nadador, informe a sua categoria: infantil (até 10 anos), juvenil (até 17 anos) ou sênios (acima de 17 anos)*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
       char nome[80];
       int idade;
           printf("Nome completo do nadador:\n");
           scanf("%s",&nome);
           printf("Idade do nadador:\n");
           scanf("%i",&idade);
       switch(toupper(idade))
           { 
           case'(idade<=10)': printf("Infantil\n");break;
           case'((idade>=10)&&(idade<=17))':printf("Juvenil\n");break;
           case'(idade>17)':printf("Senio\n"); break;
           default: printf("Invalido\n");break;
           }
getch();
}    
           
