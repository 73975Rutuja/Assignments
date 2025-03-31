/*Write a program to accept three integer numbers and find it's average*/

#include<stdio.h>

int main()
{
    float n1, n2, n3, avg;

    printf("\n Please enter any three numbers, to calculate their average :: ");
    scanf("%f%f%f",&n1,&n2,&n3);

    avg = (n1 + n2 + n3)/ 3;

    printf("\n The average of %f,%f and %f is %f ", n1,n2,n3,avg);

    return 0;
}