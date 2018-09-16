/* Fabian, Insert date here */
#include <stdio.h>
#include <time.h>


int main()
{
    time_t now;
    time(&now);

    printf("The current time is %s\n", ctime(&now));

    /* 
     * The C library comes with a function which translates Time_t values
     * into strings.
     * */

    return (0);
}
