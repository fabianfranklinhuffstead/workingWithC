/* Fabian, Insert date here */
# include <stdio.h>

int main()
{
    char mypointer;
    char *p;

    mypointer = 'p';
    p = &mypointer;
    
    printf("The address of 'pointer' is %s\n", &mypointer);
    printf("The contents of 'pointer' is %d\n", mypointer);

    printf("The address of 'pointer' is %s\n", p);
    printf("The contents of 'pointer' are %d\n", *p);
 
    return(0);
}
