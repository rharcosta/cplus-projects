/* Fazer um pgm que aceite valores m�ximos inteiros entre 0 (zero) e 9 (nove).
 Se o valor estiver dentro da faixa o pgm deve apresentar a mensagem "Valor inv�lido".
 Caso o valor esteja fora da faixa, o pgm deve apresentar "valor inv�lido"*/
 
 #include<stdio.h>
 #include<conio.h>
 main()
 {
       int a,b;
           printf("Entre com um valor numerico inteiro:\n");
           scanf("%i",&a);
       if((a<=9)||(a>=0))
           printf ("Valor valido\n");
       else
           printf("Valor invalido\n");
getch();
}
              
