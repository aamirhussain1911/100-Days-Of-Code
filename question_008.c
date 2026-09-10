// Q8: Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {

    int n;
    int ans;


    printf("Enter a number: ");
    scanf("%d", &n);

    ans = (n * (n + 1)) / 2;

    printf("The sum is: %d\n", ans);

    return 0;
}
