/* Fabian, Insert date here */
# include <stdio.h>
# include <string.h>

/* 
 * This is string string manipuation example. Finds a string within a string
 * becomes much stronger with knowledge on pointers.
 * */

int main()
{
    char source_string[] = "Learning new skills is fun";
    char find_me[] = "fun";

    if (strstr(source_string, find_me) == NULL)
        puts("String not found!");
    else
        printf("Found '%s' in '%s' \n", find_me, source_string);

    return(0);
}
