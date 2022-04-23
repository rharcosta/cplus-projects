/*Lanchonete*/
#include<stdio.h> 
#include<conio.h>
main()
{
      int a,b,c,d,e;

                  printf("Bem-vindo a lanchonete da Rubia!\n");
                  printf("Escolha uma opcao do Menu:\n\n");
                  puts("1-Pastel\n");
                  puts("2-Cachorro quente\n");
                  puts("3-Doces\n");
                  puts("4-Bebidas\n");
                  puts("5-Sair\n");
                  printf("Insira uma opcao:\n");
                  scanf("%i",&a);
switch (a)               
{
       case 1:   printf("Que sabor de pastel deseja?\n");
                 puts("\n1-Carne(R$3,00)\n");
                 puts("2-Queijo(R$3,00)\n");
                 puts("3-Frango com catupiry(R$3,00)\n");
                 puts("4-Palmito(R$3,50)\n");
                 puts("5-Sonho de valsa (R$5,00);\n");
                 scanf("%i",&b);
                                  
       
if (b==1)
printf("Voce escolheu a opcao do pastel de carne");                 
if (b==2)
printf("Voce escolheu a opcao do pastel de queijo");    
if (b==3)
printf("Voce escolheu a opcao do pastel de frango com catupiry");    
if (b==4)
printf("Voce escolheu a opcao do pastel de palmito");    
if (b==5)
printf("Voce escolheu a opcao do pastel de sonho de valsa");break;    
  
                 
                 
       case 2:   printf("Como deseja que seu cachorro quente seja composto?\n");
                 puts("\n1-Pao,Salsicha,Patata palha e maionese\n");
                 puts("2-Pao,Salsicha,Patata palha, maionese e frango\n");
                 puts("3-Pao,Salsicha,Patata palha, maionese, frango e cheddar\n");
                 puts("4-Pao,Salsicha,Patata palha, maionese e carne seca\n");
                 puts("5-Pao,Salsicha,Patata palha, maionese, carne seca e cheddar\n");
                 scanf("%i",&c);break;
                 
                 
       case 3:   printf("Opcao desejada: Doces\n");
                 puts("\n1-Alfajor(R$3,00)\n");
                 puts("2-Brigadeiro no copinho(R$1,50)\n");
                 puts("3-Trufa(R$2,0)\n");
                 puts("4-Torta de limao(R$3,50)\n");
                 puts("5-Porcao de Churros(R$10,00)\n");
                 scanf("%i",&d);
                 
                 
if (d==1)
printf("Voce escolheu a opcao do Alfajor");    
if (d==2)
printf("Voce escolheu a opcao do Brigadeiro no copinho");    
if (d==3)
printf("Voce escolheu a opcao da Trufa");    
if (d==4)
printf("Voce escolheu a opcao da Torta de limao ");    
if (d==5)
printf("Voce escolheu a opcao da Porcao de Churros");break;
                 
                 
       case 4:   printf("Qual a bebida?\n");
                 puts("\n1-Refrigerante(R$2,50)\n");
                 puts("2-Sucos naturais(R$2,50)\n");
                 puts("3-Bioleve(R$3,00)\n");
                 puts("4-Acai (R$2,00)\n");
                 puts("5-Agua(R$2,00)\n");
                 scanf("%i",&e);
        
                 
if (e==1)
printf("Voce escolheu o Refrigerante");    
if (e==2)
printf("Voce escolheu Sucos naturais");    
if (e==3)
printf("Voce escolheu o Bioleve");    
if (e==4)
printf("Voce escolheu o Acai");    
if (e==5)
printf("Voce escolheu a Agua");break;   
               
       
       
       case 5:   printf("Pressione Enter para sair");break;

}
getch();
}         
