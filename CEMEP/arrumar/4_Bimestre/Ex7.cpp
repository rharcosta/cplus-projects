/*7)Cada espectador de um cinema respondeu  a um questionário no qual constava sua idade e a sua opinião em relação ao filme:
    1- ótimo, 2- bom, 3- regular.
Faça um pgm que receba a idade e a opinião de 10 espectadores, calcule e exiba:
a)A média das idades das pessoas que responderam ótimo;
b)A quantidade de pessoas que responderam regular;
c)A porcentagem de pessoas que responderam bom entre todos os espectadores analisados.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
      int cont,idade,idade2=0,opiniao,otimo=0,bom=0,regular=0,media,porc;
      
      for(cont=1;cont<=10;cont++)
      {
         printf("Entre com a idade:\n");
         scanf("%d",&idade);
         
         printf("Qual sua opiniao em relacao ao filme?: 1- Otimo, 2- Bom, 3- Regular\n");
         scanf("%d",&opiniao);
                              while ((opiniao<1)||(opiniao>3))
                              {
                                    printf("OPINIAO INVALIDA! DIGITE NOVAMENTE:\n"); 
                                    scanf("%d",&opiniao);
                              }          

      if(opiniao==1)
      {
      otimo++;
      idade2=idade2+idade;
      }
      if(opiniao==2)
      bom++;
      
      if(opiniao==3)
      regular++;

     }
media=idade2/otimo;
porc=(bom*100)/10;
printf("A media das idades das pessoas que responderam otimo:%d\n",media);
printf("A quantidade de pessoas que responderam regular:%d\n",regular);
printf("A porcentagem de pessoas que responderam bom:%d\n",porc);
getch();
}
