/* Fabian, Insert date here */
# include <stdio.h>
# include <ctype.h>

int main()
{
    int acter;

    do
    {
        acter = getchar();
        if(isalpha(acter)) // returns true if letter of the alphabet
            putchar(acter);
    }
    while( acter != '\n');
    putchar('\n');
    return(0);
}
