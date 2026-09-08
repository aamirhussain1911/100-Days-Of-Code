// Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main() {
    double radius;
    double area, circumference;
    const double PI = 3.141592653589793;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("\n--- Circle Results ---\n");
    printf("Area: %.2lf\n", area);
    printf("Circumference: %.2lf\n", circumference);

    return 0;
}