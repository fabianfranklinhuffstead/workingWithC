/* Fabian, Insert date here */
# include <stdio.h>
# include <string.h>

int main()
{
    char first[] = "I like to travel ";
    char second[] = "I like to meet new people\n";
    char storage[64];

    strcpy(storage, first);
    strcat(storage, second);
    
    printf("Here is the concatenated string:\n%s", storage);

    return(0);
}
