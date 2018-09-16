/* Fabian, Insert date here */
# include <stdio.h>
# include <ctype.h>

int main()
{
    int c;

    do
    {
        c = getchar();
        c = toupper(c);
        putchar(c);
    }
    while( c != '\n');

    return(0);
}
