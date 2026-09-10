// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    
    int total_seconds;
    int hours;
    int minutes;
    int seconds;

    printf("Enter the total time in seconds: ");
    scanf("%d", &total_seconds);


    hours = total_seconds / 3600;
    int leftover_seconds = total_seconds % 3600;

    minutes = leftover_seconds / 60;

    seconds = leftover_seconds % 60;

    printf("\nConverted Time is -> %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
