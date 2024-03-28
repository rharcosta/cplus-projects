#include<stdio.h>
#include<conio.h>
main()
{
      float a=1, idade, casado=0, solteiro=0, viuvo=0, viuvo2=0, media=0, divorciado=0, porc;
      char status; 
      do
      {
            printf("\nDigite a idade:\n");
            scanf("%f",&idade); 
            printf("\nDigite seu status civil:\n");
            printf("C- Casado S- Solteiro D- Divorciado V- Viuvo\n");
            scanf("%s",&status);
            while ((status!='C')&&(status!='S')&&(status!='D')&&(status!='V'))
            {
                  printf("Digite corretamente, por favor!\n");
                  scanf("%s",&status);
            }
      if(status=='C')
      casado++;
      if(status=='S')
      solteiro++;
      if(status=='V')
      {
      viuvo2++;
      viuvo=viuvo+idade;
      media=viuvo/viuvo2;
      }
      if(status=='D')
      divorciado++;
      
      a++;
      }
      while (a<=5);
  
      porc=(divorciado*100)/5;
      printf("Qntd de pessoas casadas:%.2f\n",casado);
      printf("Qntd de pessoas solteiras:%.2f\n",solteiro);
      printf("A Média das idades das pessoas viuvas:%.2f\n",media);
      printf("A porcentagem das pessoas divorciadas dentre todas as demais:%.2f\n",porc);

getch();
}   
