/*Write a program to display a pattern A) using multiple printf statements. Either of the one can be used B)using single printf statement*/
/* Pattern is:

*
* *
* * *
* * * *
* * * * *

*/

#include<stdio.h>

int main()
{
    /*char ch = '*';

    printf("\n %c",ch);
    printf("\n %c%2c",ch,ch);
    printf("\n %c%2c%2c",ch,ch,ch);
    printf("\n %c%2c%2c%2c",ch,ch,ch,ch);
    printf("\n %c%2c%2c%2c%2c\n",ch,ch,ch,ch,ch);*/

    printf("\n*");
    printf("\n* *");
    printf("\n* * *");
    printf("\n* * * *");
    printf("\n* * * * *\n");

   /* answer for B) int i, j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }*/ 

    return 0;
}