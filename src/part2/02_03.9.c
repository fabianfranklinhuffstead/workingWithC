/* Fabian, Insert date here */
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/* Endless loop */

int main()
{
    int a = 0;

    while(1)
    {
        puts("Here I go...!");
        a++;
        if(a > 10) 
            /* Better practice is to evaulate this in the while loop
             * rather than breaking out using two more lines of code*/
            break;
    }

    return(0);
}
