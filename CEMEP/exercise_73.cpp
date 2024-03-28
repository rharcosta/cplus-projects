/*Pgm Passagem*/
#include<stdio.h>
#include<conio.h>
main()
{
      float sexo,pessoas,a=1,idade,destino,floripa=0,sp=0,salvador=0,salvador2=0,mg=0,botafogo=0,media=0,porc=0,idade2=0;
      char nome;
      
      printf("Digite o numero de passageiros:\n");
      scanf("%f",&pessoas);
      
      while (a<=pessoas)
      {
      printf("Digite seu nome:\n");
      scanf("%s",&nome);
      printf("Digite seu sexo: [1] Feminino [2] Masculino\n");
      scanf("%f",&sexo);
       while ((sexo!=1)&&(sexo!=2))
         {
         printf("Erro! Digite novamente\n");
         scanf("%f",&sexo);
         }
      printf("Digite sua idade:\n");
      scanf("%f",&idade);
      printf("Qual e o seu destino?\n\n");
      printf("1-Floripa 2-Sao Paulo 3-Salvador 4-Minas Gerais 5-Botafogo\n\n");
      scanf("%f",&destino);
      
      if (destino==1) 
      floripa++;
      
      if ((destino==2)&&(sexo==1))
      sp++; 
      
      if ((destino==3)&&(sexo==2))
      salvador++; 
      
      if (destino==3)
      {
      salvador2++;
      idade2=idade2+idade; 
      media=idade2/salvador2;
      }
      
      if (destino==5)
      botafogo++;
      
      a++;      
      }
porc=(botafogo*100)/pessoas;    
printf("O numero de passageiros que embarcaram para floripa foi:%.2f\n",floripa);
printf("O numero de passageiros femininos que embarcaram para SP foi:%.2f\n",sp);
printf("O numero de passageiros masculinos que embarcaram para Salvador foi:%.2f\n",salvador);
printf("A media das idades dos passageiros que embarcaram para Salvador foi:%.2f\n",media);
printf("A porcentagem de passageiros que embarcaram para Botafogo foi de:%.2f\n",porc);

getch();
}
            
