//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 

#include <stdio.h>

int main() {
    float units, bill = 0.0;

    
    printf("Enter total electricity units consumed: ");
    scanf("%f", &units);

    
    if (units < 0) {
        printf("Invalid input! Units consumed cannot be negative.\n");
    }
    
    else if (units <= 100) {
        bill = units * 1.50;
        printf("Total Electricity Bill: ₹%.2f\n", bill);
    }
    
    else if (units <= 200) {
        bill = (100 * 1.50) + ((units - 100) * 2.00);
        printf("Total Electricity Bill: ₹%.2f\n", bill);
    }
    
    else if (units <= 300) {
        bill = (100 * 1.50) + (100 * 2.00) + ((units - 200) * 3.00);
        printf("Total Electricity Bill: ₹%.2f\n", bill);
    }
    
    else {
        bill = (100 * 1.50) + (100 * 2.00) + (100 * 3.00) + ((units - 300) * 5.00);
        printf("Total Electricity Bill: ₹%.2f\n", bill);
    }

    return 0;
}