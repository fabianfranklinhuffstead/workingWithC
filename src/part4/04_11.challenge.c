/* Fabian, Insert date here */
# include <stdio.h>
# include <stdlib.h>

#define SIZE 1024

/* 
 * Modification of previous example
 *
 * Accept input
 *
 * Store the input in 1024 charaters
 * allocated
 *
 * Display the stored text
 *
 * */

int main()
{
    char *sto;

    sto = (char *)malloc(sizeof(char)*SIZE);

    printf("Enter the a word: ");
    scanf("%s", sto);

    if(sto == NULL)
    {
        puts("Memory error");
        return(1);
    }


    printf("Here we have %d bytes of memory assigned\nTo this %p memory location.\n"
            , SIZE, sto);

    printf("\n%c is the value which is store\n", *sto);
    return(0);
}
