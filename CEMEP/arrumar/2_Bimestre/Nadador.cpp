/*Dada a idade de um nadador, informe a sua categoria: infantil (até 10 anos), juvenil (até 17 anos) ou sênios (acima de 17 anos)*/
#include<stdio.h>
#include<conio.h>
main()
{
       char nome[80];
       int idade;
           printf("Nome completo do nadador: \n");
           scanf("%s",&nome);
           printf("Idade do nadador:\n ");
           scanf("%i",&idade);
       if      (idade<=10)
                   printf("Infantil\n");
           else if ((idade>=10)&&(idade<=17))
                   printf("Juvenil\n");
           else if (idade>17)
                    printf("Senio\n");
       else 
                    printf("Invalido");
getch();
}    
           
