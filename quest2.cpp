#include <iostream>
#include <ctime>
#include <cstdio>

using namespace std;

int main() {
    // Input the time zone offset from UTC
    int offset;
    printf("Enter the UTC offset in hours: ");
    scanf("%d", &offset);

    // Get the current time in UTC
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);  // Get the current time
    timeinfo = gmtime(&rawtime);  // Convert to UTC time

    // Adjust the time by the offset
    rawtime += offset * 3600;  // Offset is in hours, so multiply by 3600 (seconds in an hour)
    timeinfo = localtime(&rawtime);  // Convert the adjusted time to local time

    // Output the adjusted time using printf, formatted to show only time
    printf("%02d:%02d:%02d\n", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);

    return 0;
}
