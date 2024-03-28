/*5)Faça um pgm que receba a idade e o peso de 7 pessoas. 
Calcule e exiba as médias dos pesos das pessoas da mesma faixa etária.
As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a 30 anos e maiores de 30 anos.*/
#include<stdio.h>
#include<conio.h>
main()
{
      int cont,idade,acum1=0,acum2=0,acum3=0,acum4=0;
      float peso,media1,media2,media3,media4,peso1=0,peso2=0,peso3=0,peso4=0;
      
      for(cont=1;cont<=7;cont++)
      {
      printf("Insira sua idade:\n");
      scanf("%d",&idade);
      printf("Insira seu peso:\n");
      scanf("%f",&peso);
      
      if((idade>=1)&&(idade<=10))
      {
      acum1++;
      peso1=peso1+peso;
      }
      if((idade>=11)&&(idade<=20))
      {
      acum2++;
      peso2=peso2+peso;
      }
      if((idade>=21)&&(idade<=30))
      {
      acum3++;
      peso3=peso3+peso;
      }
      if(idade>=30)
      {
      acum4++;
      peso4=peso4+peso;
      }
      }
media1=peso1/acum1;
media2=peso2/acum2;
media3=peso/acum3;
media4=peso/acum4;
printf("A media da faixa etaria [1 a 10 anos]:%.2f\n",media1);
printf("A media da faixa etaria [11 a 20 anos]:%.2f\n",media2);
printf("A media da faixa etaria [21 a 30 anos]:%.2f\n",media3);
printf("A media da faixa etaria [Maior de 30 anos]:%.2f\n",media4);
getch();
}
