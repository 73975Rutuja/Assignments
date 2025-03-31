/*Write a program to accept a number and display it in decimal, character, octal and Hexadecimal form*/

#include<stdio.h>

int main ()
{
    int R;

    printf("\n Please enter a single number : ");
    scanf("%d",&R);

    printf("\n The entered number in decimal is: %d",R);
    printf("\n The entered number in octal is: %o",R);
    printf("\n The entered number in hexadecimal is: %x\n",R);

    printf("\n The entered number in character is: %c ",R); // since this line represents the Ascii values, so if we enter the numbers from 0 to 32, then it might not show anything, because those are the ascii values of backspace, enter and so on. You can refer to ASCII values charts to cross check the answer.

    return 0;
}