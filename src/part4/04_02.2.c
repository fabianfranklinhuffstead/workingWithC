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
 * */
int main()
{
    int mypointer;
    int *p;

    mypointer = 987;
    p = &mypointer;
    
    printf("The address of 'pointer' is %p\n", &mypointer);
    printf("The contents of 'pointer' is %d\n", mypointer);

    printf("The address of 'pointer' is %p\n", p);
    printf("The contents of 'pointer' are %d\n", *p);
 
    return(0);
}
