// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h> 

int main() {
    
    float principal;
    float rate;
    float time;
    float simple_interest;
    float total_amount;
    float compound_interest;

    
    printf("Enter the principal money: ");
    scanf("%f", &principal);

    printf("Enter the interest rate: ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

    
    simple_interest = (principal * rate * time) / 100;

    
    total_amount = principal * pow((1 + (rate / 100)), time);
    compound_interest = total_amount - principal;


    printf("\n--- Results ---\n");
    printf("Simple Interest = %f\n", simple_interest);
    printf("Compound Interest = %f\n", compound_interest);

    return 0;
}
