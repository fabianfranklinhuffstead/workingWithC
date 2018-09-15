/* Fabian, Insert date here */
# include <stdio.h>
# include <ctype.h>

void repeat(int count);

int main()
{
    int ch = 'a';

    printf("Big %c \n", toupper(ch));
    printf("Little %c \n", tolower(ch));
    printf("What being with %c? \n", (ch));

    return(0);
}
