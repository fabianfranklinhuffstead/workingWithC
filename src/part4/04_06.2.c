/* Fabian, Insert date here */
# include <stdio.h>


int main()
{
    char name[15]; // room for 14 characters including NULL
    
    /* 
     * A nice way to think about arrays are that they are 
     * pointer in disguise.
     * */
    printf("Your name? ");
    scanf("%c", name);
    
    printf("You are %s\n", name);
    return(0);
}
