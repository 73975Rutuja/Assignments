/* Write a program to print the ASCII value of user entered character in decimal, octal, hex format*/

#include<stdio.h>

int main ()
{
    char R;

    printf("\n Please enter a single character : ");
    scanf("%c",&R);

    printf("\n The entered character is: %c",R);
    printf("\n The ASCII value of that character is: %d",R);
    printf("\n The entered character in octal is: %o",R);
    printf("\n The entered character in hexadecimal is: %x\n",R);

    return 0;
}