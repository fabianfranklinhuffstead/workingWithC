/* Fabian, Insert date here */
# include <stdio.h>

/* Another iteration of previous example
 * 
 * This code walks through each character using
 * the pointers memory location.
 *
 * A small tip here:
 * When you see the dreaded double-asterisk pointer notation, 
 * it's almost always a sign that you're dealing with an array of 
 * strings, or specifically, an array of memory locations 
 * for each of those strings.
 *
 * */

int main()
{
    char *gang[5] = {
        "Spanky", 
        "Buckwheat", 
        "Alfalfa",
        "Darla",
        "Pete the pup"
    };
    int x;
    char *cptr;

    for(x=0;x<5;x++)
    {
        cptr = *(gang+x);   //uses pointer notation
        // previous version of this is " cptr = gang[x];"
        while(*cptr)
        {
            putchar(*cptr);
            cptr++;
        }
        putchar('\n');
    }


    return(0);
}
