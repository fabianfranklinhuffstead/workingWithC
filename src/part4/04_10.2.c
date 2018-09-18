/* Fabian, Insert date here */
# include <stdio.h>
# include <stdlib.h>

#define SIZE 1024

/* 
 * MALLOC - malloc
 * stands for Memory ALLOCation
 *
 * Here is an example of this in use below.
 *
 * */

int main()
{
    char *sto;

    //sto = malloc(sizeof(char)*SIZE);
    sto = (char *)malloc(sizeof(char)*SIZE);
    /* 
     * Here we have use type casting. This when we make a variable
     * which masquerade as another. This ensures we have by using 
     * (char *) a character type and a memory location assigned.
     * */

    if(sto == NULL)
    {
        puts("Memory error");
        return(1);
    }

    printf("Here we have %d bytes of memory assigned to this %p memory location.\n"
            , SIZE, sto);

    return(0);
}
