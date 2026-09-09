//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("\n--- Temperature Conversion ---\n");
    printf("%.2lf°C is equal to %.2lf°F\n", celsius, fahrenheit);

    return 0;
}