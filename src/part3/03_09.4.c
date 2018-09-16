/* Fabian, Insert date here */
#include <stdio.h>
#include <time.h>

/*
 * Complete time function
 * */

int main()
{
    time_t now;
    struct tm *right_now; //This is a pointer variable.

    time(&now);
    right_now = localtime(&now);
    printf("Today is %d/%d at %d:%02d\n", 
            //here we add %02d which displays which makes sure 0 is display
            //on a span of 2 digits.
            right_now -> tm_mon+1, //+1 as this value starts from 0
            right_now -> tm_mday,
            right_now -> tm_hour,
            right_now -> tm_min);

    return (0);
}
