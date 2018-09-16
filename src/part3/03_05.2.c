/* Fabian, Insert date here */
#include <stdio.h>

int main()
{
    char names[4][7] = {
        "Billie", 
        "Steve", 
        "Mike", 
        "Samuel"
    };
    /* 
     * The letters here are are store using the second array dimension.
     * Notice that we have seven values here one extra for the NULL value.
     * This first assignment is for the amount of words.
     * */
    
    int x;

    for(x=0;x<4;x++)
        printf("%s\n", names[x]); 
        /* 
         * We only require to print the first dimension of the array.
         * */

    return(0);
}
