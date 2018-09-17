/* Fabian, Insert date here */
# include <stdio.h>

int main()
{
    int array[] =  { 11, 13, 17, 19};
    int x;
    int *aptr;

    aptr = array;
    //*(aptr+2) = 0;
    
    aptr = aptr + 2; // We go to the third position in the array
    *aptr = 0; // We set this value to 0

    /*
     * The two lines can be written as one line which is:
     *      *(aptr+2) = 0;
     * A use case for this example is if we do not not want to
     * effect the value of the aptr variable. 
     * */

    for(x=0; x<4; x++)
    {
        printf("Element %d: %d\n", x+1, array[x]);
    }

    return(0);
}
