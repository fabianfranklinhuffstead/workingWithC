/* Fabian, Insert date here */
# include <stdio.h>
# include <ctype.h>

int main()
{
    int acter;

    do
    {
        acter = getchar();
        if(isupper(acter)) // returns true if uppercase letter of the alphabet
            putchar(acter); 
        /*
         * Other examples include isalpha, islower, isnumber, isblank. I can
         * of course craft my own C function to apply to a character when
         * manpiluation is introduce.
         *
         * */
    }
    while( acter != '\n');
    putchar('\n');
    return(0);
}
