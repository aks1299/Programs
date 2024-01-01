// DNF
//  Assuming a 24-hr clock and the structure type time t is defined below.
//  typedef struct{ int hour, minute, second; };
//  Write a program that contains a function new time(...) that returns as its value an updated time based the original time of day and the number of seconds that have elapsed since the previous update time. if time now were 21-58-32 and elapsed second 97, the original time now is 22-00-09. The function prototype to compute the new time is time t new time(time t time of day, int elapsed secs);
#include <stdio.h>

// Structure definition for time
typedef struct
{
    int hour, minute, second;
} myTime;

// Function to calculate the new time based on original time and elapsed seconds
myTime newTime(myTime originalTime, int elapsedSeconds)
{
    myTime updatedTime;

    // Calculate the total seconds from the original time
    int totalSeconds = originalTime.hour * 3600 + originalTime.minute * 60 + originalTime.second;

    // Update the total seconds based on elapsed seconds
    totalSeconds += elapsedSeconds;

    // Calculate the updated time components
    updatedTime.hour = (totalSeconds / 3600) % 24;
    updatedTime.minute = (totalSeconds / 60) % 60;
    updatedTime.second = totalSeconds % 60;

    return updatedTime;
}

int main()
{
    myTime originalTime, updatedTime;
    int elapsedSeconds;

    // Taking input from the user
    printf("Enter the original time (hh:mm:ss): ");
    scanf("%d:%d:%d", &originalTime.hour, &originalTime.minute, &originalTime.second);

    printf("Enter the elapsed seconds: ");
    scanf("%d", &elapsedSeconds);

    // Calculate the updated time
    updatedTime = newTime(originalTime, elapsedSeconds);

    // Display the original and updated times
    printf("Original time: %02d:%02d:%02d\n", originalTime.hour, originalTime.minute, originalTime.second);
    printf("Updated time : %02d:%02d:%02d\n", updatedTime.hour, updatedTime.minute, updatedTime.second);

    return 0;
}
