/*
Task 3
Write a program using structures to calculate the difference between two time periods using a user-defined function.

*/

#include <stdio.h>

struct TimePeriod
{
   int hours;
   int minutes;
   int seconds;
};

// Calculate the difference between two time periods
struct TimePeriod calculateTimeDifference(struct TimePeriod start, struct TimePeriod end)
{
   struct TimePeriod diff;

   // Convert the time periods to seconds
   int startTimeInSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
   int endTimeInSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;

   // Calculate the difference in seconds
   int diffInSeconds = endTimeInSeconds - startTimeInSeconds;

   // Convert the difference back to hours, minutes, and seconds
   diff.hours = diffInSeconds / 3600;
   diffInSeconds %= 3600;
   diff.minutes = diffInSeconds / 60;
   diff.seconds = diffInSeconds % 60;

   return diff;
}

int main()
{
   struct TimePeriod start, end, difference;

   printf("Enter the start time period (hours minutes seconds): ");
   scanf("%d %d %d", &start.hours, &start.minutes, &start.seconds);

   printf("Enter the end time period (hours minutes seconds): ");
   scanf("%d %d %d", &end.hours, &end.minutes, &end.seconds);

   difference = calculateTimeDifference(start, end);

   printf("Difference: %d hours %d minutes %d seconds\n", difference.hours, difference.minutes, difference.seconds);

   return 0;
}


/*

Sample output

Enter the start time period (hours minutes seconds): 10 30 45
Enter the end time period (hours minutes seconds): 12 45 20

Difference: 2 hours 14 minutes 35 seconds

*/