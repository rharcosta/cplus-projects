/*Salao De beleza*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
       int a, b;

       printf("Bem-vindo ao salao de beleza yellow hair!\n");
       
       
       puts("* * * * * * * * * * * * * * *");
       puts("*  1-Mao R$20,00            *");
       puts("*  2-Pe  R$15,00            *");
       puts("*  3-Pe e mao R$30,00       *");
       puts("*  4-Depilacao  R$40,00     *");
       puts("*  5-Progressiva  R$180,00  *");
       puts("*  6-Sobrancelha  R$15,00   *");
       puts("* * * * * * * * * * * * * * *");

       printf("Digite a opcao que lhe deseja:\n");
       scanf("%i",&a);

switch(a)
{

case 1:
       printf("Voce escolheu realizar a estetica nas maos\n");
       printf("Dirija- se a Av. Romeu Tortima- Barão Geraldo, ou entre em contato conosco para agendar seu horario:(19)3208-0756\n");break;
case 2:
       printf("Voce escolheu realizar a estetica nos pes \n");
       printf("Dirija- se a Av. Romeu Tortima- Barão Geraldo, ou entre em contato conosco para agendar seu horario:(19)3208-0756\n");break;
case 3:
       printf("Voce escolheu realizar o pe e mao\n");
       printf("Dirija- se a Av. Romeu Tortima- Barão Geraldo, ou entre em contato conosco para agendar seu horario:(19)3208-0756\n");break;
case 4:
       printf("Voce escolheu realizar a depilacao\n");
       printf("Dirija- se a Av. Romeu Tortima- Barão Geraldo, ou entre em contato conosco para agendar seu horario:(19)3208-0756\n");break;
case 5:
       printf("Voce escolheu realizar a progressiva\n");
       printf("Dirija- se a Av. Romeu Tortima- Barão Geraldo, ou entre em contato conosco para agendar seu horario:(19)3208-0756\n");break;
case 6:
       printf("Voce escolheu realizar a sobrancelha\n");
       printf("Dirija- se a Av. Romeu Tortima- Barão Geraldo, ou entre em contato conosco para agendar seu horario:(19)3208-0756\n");break;
default: printf("Opcao invalida"); 
}
getch();
}
