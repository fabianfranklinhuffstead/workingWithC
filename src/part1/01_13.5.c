/* Fabian, Insert date here */
 # include <stdio.h>

int main()
{
    char name[15]; /* room for 14 characters including 1 at the end to store null  */

    printf("Your name? ");
    scanf("%s", name); 
    /* name does not require a ampersand  because the name variable is an array of
     * characters and arrays do not require ampersand characters. 
     * */
    printf("You are %s \n", name);

    return(0);
}
