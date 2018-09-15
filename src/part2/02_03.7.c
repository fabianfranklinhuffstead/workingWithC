/* Fabian, Insert date here */
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{
    char ch;

    ch = 'A';

    do
    {
        putchar(ch);
        ch++;
    }
    while(ch != 'Z' + 1); /* The Z + 1 is the exit condition */

    putchar('\n');

    return(0);
}
