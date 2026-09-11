// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main() {
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);


    if (num > 0) {
        printf("The number is positive.\n");
    } 
    else {
        
        if (num < 0) {
            printf("The number is negative.\n");
        } 
        else {
            
            printf("The number is zero.\n");
        }
    }

    return 0;
}
