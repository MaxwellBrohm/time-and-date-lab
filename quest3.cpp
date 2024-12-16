#include <iostream>
#include <ctime>
#include <cstdio>

using namespace std;

int main() {
    // Variable to store the start and end times
    time_t startTime, endTime;

    // Record the start time
    time(&startTime);

    // Ask the question
    printf("What is 5 + 3? ");
    
    // Wait for the user's input
    int answer;
    scanf("%d", &answer);

    // Record the end time
    time(&endTime);

    // Calculate the time difference (in seconds)
    double timeTaken = difftime(endTime, startTime);

    // Output the time it took the user to answer the question
    printf("You took %.0f seconds to answer.\n", timeTaken);

    return 0;
}
