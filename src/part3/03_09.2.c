/* Fabian, Insert date here */
#include <stdio.h>
#include <time.h>


int main()
{
    time_t now;
    time(&now);

    printf("The current time is %ld\n", now);

    return (0);
}
