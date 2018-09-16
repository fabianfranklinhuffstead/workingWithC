/* Fabian, Insert date here */
#include <stdio.h>
#include <time.h>


int main()
{
    printf("The current time is %ld\n", time(NULL));

    /*
     * ld is a long integer value.
     * The time function requires an argument here we use NULL
     * display here is the UNIX EPIC TIME.
     *
     * */
    return (0);
}
