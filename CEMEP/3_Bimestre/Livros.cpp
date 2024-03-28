/*pgm livro*/
#include<stdio.h>
#include<conio.h>
main()
{
      int a,b;
      puts("Classificacao de livros:\n");
      puts("1-Romance\n");
      puts("2-Aventura\n");
      puts("3-Literarios\n");
      puts("4-Terror\n");
      puts("5-Infantil\n");
      printf("Digite o genero desejado:\n");
      scanf("%i",&a);
      
      if (a==1)
             {
              printf("\nLivros:\n");
              puts("1-A culpa e das estrelas\n");
              puts("2-Quem e voce alasca\n");
              puts("3-A Ana e o beijo Frances\n");
              puts("4-Se eu ficar\n");
              puts("5-Como eu era antes de voce!\n");
              }
      if (a==2)
              {
              printf("\nLivros:\n");
              puts("1-O aprendiz\n");
              puts("2-Ar rarefeito\n");
              puts("3-A volta ao mundo em 80 dias \n");
              puts("4-As aventuras de Sherlock Holmes\n");
              puts("5-A cidade dos ladroes\n");
              }
      if (a==3)
              { 
              printf("\nLivros:\n");
              puts("1-Memorias Postumas de Bras cubas\n");
              puts("2-Tristao e isolda\n");
              puts("3-Meu pe de laranja lima\n");
              puts("4-A lisbela e o prisioneiro\n");
              puts("5-Eu passarinho\n");
              }
      if (a==4)
              {
              printf("\nLivro:\n");
              puts("1-O exorcista\n");
              puts("2-O coracao acelerado\n");
              puts("3-Dracula\n");
              puts("4-Carrie: A estranha\n");
              puts("5-A estrada da noite\n");
              }
      if (a==5)
              {
              printf("\nLivros:\n");
              puts("1-Os tres porquinhos\n");
              puts("2-A bela e a fera\n");
              puts("3-Cinderela\n");
              puts("4-Alice no pais das maravilhas\n");
              puts("5-Rapunzel\n");
              }
       else 
       printf("Opcao Invalida\n");     
getch();
}
