/*Write a program to accpet an integer value and print it's table*/

#include<stdio.h>

int main()
{
    int num, i;

    printf("\n Please give a number, whose table you wanted to print :: ");
    scanf("%d",&num);

    for(i=1; i<=10; i++)
    {
        printf("\n %d * %d = %d  ", num, i, num*i);
    }
    return 0;
}