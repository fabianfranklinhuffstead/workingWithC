/* Fabian, Insert date here */
#include <stdio.h>

    /*
     * This is the array version of the previous file
     * An array is a list of variables all of the same type.
     * -- Anatomny of an array --
     *  Declared like any other variable
     *  Type is specified
     *  Sqaure brackets contain the number of elements, or
     *  Square brackets can be empty when elements are specified
     *  
     *  New languages have dynamic storage however the size of the
     *  array here can not change after it has been declared.
     * */

int main()
{
    float temps[4] = { 84.9, 83.7, 85.8, 88.2 };
    int n;
    
    printf("Local temperatures: \n");
    for(n=0;n<4;n++)
        printf("Station %d: %.1f\n", n, temps[n]);

    return(0);
}
