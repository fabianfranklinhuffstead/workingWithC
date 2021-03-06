/* Fabian, Insert date here */
# include <stdio.h>

/* 
 *----------------- Pointers ----------------
 *
 * A variable that holds a memory location
 *
 * The dual nature of pointers:
 *
 * Pointer variables are declared by unsing the * operator.
 * Pointer variables are used with or without the * operator.
 * Without *, the variable respresents a memory location.
 * WIth *, the variable represents the contents of that location.
 *
 * Check the next example to see more on this.
 * */
int main()
{
    int mypointer;
    int *p;

    p = &mypointer;
    
    printf("The address of 'pointer' is %p\n", &mypointer);
    printf("The address of 'pointer' is %p\n", mypointer;

    return(0);
}
