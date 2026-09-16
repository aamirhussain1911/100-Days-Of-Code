// Q23: Write a program to calculate library fine based on late days as follows: 

#include <stdio.h>

int main() {
    int days;
    float fine = 0.0;

    
    printf("Enter number of late days: ");
    scanf("%d", &days);

    
    if (days < 0) {
        printf("Invalid input! Days cannot be negative.\n");
    }
    
    else if (days <= 5) {
        fine = days * 0.50;
        printf("Fine: ₹%.2f\n", fine);
    }
    
    else if (days <= 10) {
        fine = (5 * 0.50) + ((days - 5) * 1.00);
        printf("Fine: ₹%.2f\n", fine);
    }

    else if (days <= 30) {
        fine = (5 * 0.50) + (5 * 1.00) + ((days - 10) * 5.00);
        printf("Fine: ₹%.2f\n", fine);
    }
    
    else {
        fine = (5 * 0.50) + (5 * 1.00) + (20 * 5.00) + ((days - 30) * 10.00);
        printf("Your membership has been CANCELED due to delay over 30 days!\n");
        printf("Total Fine Amount: ₹%.2f\n", fine);
    }

    return 0;
}