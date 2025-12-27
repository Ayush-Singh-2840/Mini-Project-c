// Take total seconds as input. Calculate hours using division. Find remaining minutes using modulus. Remaining seconds are printed directly.
// Ayush Singh
// Erp - 10356

#include <stdio.h>

int main()
{
    int totalSeconds;
    int hours, minutes, seconds;

    printf("Enter total seconds: ");


    if (scanf("%d", &totalSeconds) != 1 || totalSeconds < 0)
    {
        printf("Invalid input! Please enter a positive integer.\n");
        return 0;
    }

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("Time in HH:MM:SS format = %02d:%02d:%02d\n",
           hours, minutes, seconds);

    return 0;
}
