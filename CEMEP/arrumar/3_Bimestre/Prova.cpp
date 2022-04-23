#include <stdio.h>
#include <conio.h>

main()
{
      int cont=1,contA=0,contB=0,idade,contC=0;
      float alt,peso,acum=0,acumA=0,acumB=0,mediaA,mediaB,por,contD=0,contE=0;
      
      while(cont<=5)
      {
                    printf("\n[%i]",cont);
                    printf("\nEntre com idade: "); scanf("%i",&idade);
                    printf("Entre com altura: "); scanf("%f",&alt);
                    printf("Entre com peso: "); scanf("%f",&peso);
                    
                    
                    if(idade>50)
                    contA++;
                    if((idade>=10)&&(idade<=20))
                    {
                    acumA+=alt;
                    contE++;
                    }
                    if((idade>=5)&&(idade<=20))
                    contC++;
                    if (peso<40)
                    contD++;
                    
                    acum+=idade;
      cont++;
      }
      mediaA=acumA/contE;
      mediaB=acum/5;
      por=(contD*100)/5;
                    
      printf("\n\nA quantidade de pessoas com mais de 50 anos: %i",contA);
      printf("\nA media das alturas das pessoas com idade entre 10 e 20 anos: %.2f",mediaA);
      printf("\nA media das idade: %.2f",mediaB);
      printf("\nO numero de pessoas entre 5 e 20 anos: %i",contC);
      printf("\nA porcentagem de pessoas com peso menor que 40kg entre todas as pessoas analisadas: %.2f",por);
      
      getch();
}
