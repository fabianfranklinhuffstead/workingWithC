/* Fabian, Insert date here */
#include <stdio.h>

#define MEALS 3

int main()
{
    int calories[MEALS];
    int x, total;

    total =0; // initialize total

    /* If we do not initialize some values this can lead to errors
     * mostly the errors which occur are ones which are persistent
     * garbage in the background.
     *
     * There is an off chance that this continues to work however keep
     * in mind that random values besides value can appear if this value.
     * Is not initialize.
     * */
    puts("Calorie counter");
    for(x=0; x<MEALS; x++)
    {
        printf("Calories at meal %d: ", x+1); // "x + 1" for readable output
        scanf("%d", &calories[x]); 
        /* An array element is a variable so the ampersand is
         * required.
         * */
        total = total + calories[x];
    }
    printf("You had a total of %d calories. \n", total);

    return(0);
}
