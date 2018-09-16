/* Fabian, Insert date here */
#include <stdio.h>

/*
 * For this challenge the task is to add another dimension to the
 * mult dimension array.
 *
 * That dimension should be a string which is "CProgram"
 * */

int main()
{
    char names[5][10] = { // Would be better to define constants here.
        "Billie", 
        "Steve", 
        "Mike", 
        "Samuel",
        "CProgram"
    };
    
    int x;

    for(x=0;x<5;x++)
        printf("%s\n", names[x]); 
        /* 
         * We only require to print the first dimension of the array.
         * */

    return(0);
}
