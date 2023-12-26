// DNF
//  Assuming a 24-hr clock and the structure type time t is defined below.
//  typedef struct{ int hour, minute, second; };
//  Write a program that contains a function new time(...) that returns as its value an updated time based the original time of day and the number of seconds that have elapsed since the previous update time. if time now were 21-58-32 and elapsed second 97, the original time now is 22-00-09. The function prototype to compute the new time is time t new time(time t time of day, int elapsed secs);
#include <stdio.h>
typedef struct
{
    int hour, minute, second;
} time_t;
time_t new_time(time_t time_of_day, int elapsed_secs)
{
    int extra_hours, extra_minutes, extra_seconds;
    int current_hours = time_of_day.hour, current_minutes = time_of_day.minute, current_seconds = time_of_day.second;
    extra_hours = current_hours / 86400;
}
int main()
{
    // Initialize the current time.
    time_t input_time = {.hour = 21, .minute = 58, .second = 32};
    time_t after_time = new_time(input_time, 97);
    return 0;
}