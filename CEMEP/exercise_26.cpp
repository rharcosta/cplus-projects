/*Dado um número inteiro indicando uma operação num caixa eletrônico, informe a opção correspondente:
       1-Saldo
       2-Extrato
       3-Saque 
       4-Sair    */

#include<stdio.h>
#include<conio.h>

main()
{
      char nome;
      int a;
printf("Digite o nome completo do titular:\n");
scanf("%s",&nome);
printf("Digite o numero don cartao:\n");
printf("Digite o numero requirido:\n");
printf("\n1-Saldo\n\a\t 2-Extrato\n\t\a 3-saque\n\t\a 4-sair\n\a\t");
scanf("%i",&a);
if(a==1)
printf("Consultar saldo");
else if(a==2)
printf("Consultar o extrato");
else if(a==3)
printf("Opcao saque");
else if(a==4)
printf("Sair");
else 
printf("Opcao invalida"); 
getch();
}
