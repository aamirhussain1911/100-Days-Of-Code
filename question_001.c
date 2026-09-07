//Write a program to input two numbers and display their sum.
#include <stdio.h>
int main ()
{
    int num1, num2;
    printf("enter first number: ");
    scanf("%d", &num1);

    printf("enter second number: ");
    scanf("%d",&num2);
    printf("sum = %d", num1+num2);

    return 0;

}