/* Write a program to accept two numbers and find, its 1. Sum, 2. Difference and 3. Product */
/*TO check with different datatypes and try to give a big value too*/

#include<stdio.h>

int main ()
{
    /*unsigned int*/ /*char*/ double n1, n2;
    /*unsigned int */ /*char*/ double sum, sub, mult;

    printf("\n Please enter any two numbers : ");
    scanf("%lf%lf",&n1,&n2); // 5678.09887 and 123476.98765

    sum = n1+n2;
    sub = n1-n2;
    mult = n1*n2;

    printf("\n The addition of the two numbers is : %lf",sum); // 129155.086520
    printf("\n The difference of the two numbers is : %lf",sub); // -117798.888780
    printf("\n The product of the two numbers is : %lf\n\n",mult); // 701114544.046469

    return 0;
}