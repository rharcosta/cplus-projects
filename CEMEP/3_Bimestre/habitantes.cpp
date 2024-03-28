/*Uma pesquisa sobre algumas características físicas da população de determinada região coletou os seguintes dados, 
referentes a cada habitante para serem analisados:
-Sexo (Maculino, feminino);
-Cor dos olhos (Azuis,verdes,castanhos,pretos);
-Cor dos cabelos (Louro, castanhos, pretos, ruivo);
-Idade;
Para  cada habitante, foi digitada uma linha com esses dados e a ultima linha, que não corresponde a ninguém, 
conterá o valor de idades igual a -1. 
Calcule e exiba:
a) A maior idade dos habitantes; 
b) A porcentagem dos indivíduos do sexo feminino, cuja idade esta entre 18 e 35 anos, inclusive, e que tenham olhos verdes e cabelos louros;*/ 

#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
      int sexo,olhos,cabelos,idade;
      float idade_maior,sexo2,sexo3,porcentagem;
      idade_maior=0;
      sexo2=0;
      sexo3=0;
      porcentagem=0;
      
      while (idade!=-1)
      {
      printf("Insira seu sexo:\n");
      puts("* * * * * * * * * * ");
      puts("*   1- Feminino   * ");
      puts("*   2- Masculino  * ");
      puts("* * * * * * * * * * ");
      scanf("%i",&sexo);
      
       while (sexo>=3)
      {
      printf("Digite novamente\n");
      scanf("%i",&sexo);
      }
      
      printf("Qual eh a cor de seus olhos?:\n");
      puts("* * * * * * * * * * ");
      puts("*    1- Azuis     * ");
      puts("*    2- Verdes    * ");
      puts("*    3- Castanhos * ");
      puts("*    4- Pretos    * ");
      puts("* * * * * * * * * * ");
      scanf("%i",&olhos);
      
       while (olhos>=5)
      {
      printf("Digite novamente\n");
      scanf("%i",&olhos);
      }
      
      printf("Qual eh a cor de seus cabelos?:\n");
      puts("* * * * * * * * * * ");
      puts("*    1- Louro     * ");
      puts("*    2- Castanho  * ");
      puts("*    3- Pretos    * ");
      puts("*    4- Ruivo     * ");
      puts("* * * * * * * * * * ");
      scanf("%i",&cabelos);
       
       while(cabelos>=5)
      {
      printf("Digite novamente\n");
      scanf("%i",&cabelos);
      }
      
      printf("Idade:\n");
      scanf("%i",&idade);
      
      if (idade>idade_maior)
      idade_maior=idade_maior+idade;
      
      if ((sexo==1)&&(idade>18)&&(idade<35)&&(olhos==2)&&(cabelos==1))
      sexo2=sexo2+1;
      
      if (sexo==1)
      sexo3=sexo3+1;

      }
      
      porcentagem=(sexo2*100)/sexo3;
      printf("A maior idade dos habitantes requeridos foi: %.2f\n",idade_maior);
      printf("A porcentagem de sexos femininos foi: %.2f\n",porcentagem);
      
getch();
}
