/* Fabian, Insert date here */
# include <stdio.h>
# include <stdlib.h>

int main()
{
    int r;

    srand((unsigned)time(NULL)); 
    /* Needs a positive integer to work function from the standard library*/ 
    
    /* To make the random function asign a non cache/static random number we can fetch 
     * the current system time. This generates the random number however each series of random
     * numbers generate from this are not completely random and lay quite closely to eachother.
     * To fix this in the future using a formula in conjuction with this will allow for further
     * randomness to be introduce. */

    r = rand();

    printf("%d is a random number.\n",r);
    
    return(0);
}
