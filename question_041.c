// Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, firstDigit, lastDigit, totalDigits = 0;
    int swappedNum;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Please enter a valid integer.\n");
        return 1;
    }

    originalNum = num;

    
    if (num >= -9 && num <= 9) {
        printf("Swapped number: %d\n", originalNum);
        return 0;
    }


    int temp = (num < 0) ? -num : num;

    
    lastDigit = temp % 10;

    
    int firstTemp = temp;
    while (firstTemp >= 10) {
        firstTemp /= 10;
        totalDigits++;
    }
    firstDigit = firstTemp;

    
    int multiplier = 1;
    for (int i = 0; i < totalDigits; i++) {
        multiplier *= 10;
    }

    
    int middlePart = (temp % multiplier) / 10;
    swappedNum = lastDigit * multiplier + middlePart * 10 + firstDigit;

    
    if (num < 0) {
        swappedNum = -swappedNum;
    }

    printf("Original number: %d\n", originalNum);
    printf("Swapped number:  %d\n", swappedNum);

    return 0;
}