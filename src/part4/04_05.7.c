/* Fabian, Insert date here */
# include <stdio.h>

/* 
 * Comination of previous two examples without the
 * use of the ptr variable.
 *
 * Once you change the string variable you loose 
 * its base location in memory.
 *
 * For this code this is not the case as you can see below
 * as we relate directly to the pointer.

 * */

int main()
{
    char *string = "I'm just a normal string.\n";

    while(*string) // represents characters
    {
        putchar(*string); // represents characters
        string++; // represent memory location
    }
    return(0);
}
