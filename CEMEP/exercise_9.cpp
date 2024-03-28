#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
    char s;
    printf("Sex: ");
    scanf("%c",&s);
    if ((s=='M')|| (s=='m'))
        printf("Male\n");
    else if ((s=='F')||(s=='f'))
        printf("Female");
    else
        printf("Error!");
    getch();
}
