#include <iostream>
#include <ctime>
#include <cstdio> 

using namespace std;

int main()
{
   time_t now = time(nullptr);
   printf("%s", ctime(&now));  // Use %s to print the string returned by ctime
}