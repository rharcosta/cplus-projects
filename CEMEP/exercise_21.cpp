/*Ler um valor num�rico inteiro referente aos c�digos 1,2 ou 3. 
Qualquer outro valor deve apresentar uma mensagem "C�digo inv�lido!".
Se o valor estiver correto, apresente o valor do c�digo escrito  por extenso.*/
#include<stdio.h>
#include<conio.h>
main()
{
      int a;
      puts("1\n");
      puts("2\n");
      puts("3\n");
      printf("Digite um dos numeros acima:\n"); 
      scanf("%i",&a);
                     if (a==1)
                         printf("Numero escolhido: Um!\n");
                     else if (a==2)
                         printf("Numero escolhido: Dois!\n");
                     else if (a==3)
                         printf("Numero escolhido: Tres!\n");
                     else
                         printf("Codigo invalido");
getch();
}
