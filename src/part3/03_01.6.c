/* Fabian, Insert date here */
# include <stdio.h>

int isLowerCase(int ch);

int main()
{
    int c;

    do
    {
        c = getchar();
        if(isLowerCase(c))
            putchar(c);
    }
    while (c != '\n');
    putchar('\n');
    return(0);
}


int isLowerCase(int ch)
{
    if(ch < 'a' || ch > 'z')
        return(0);
    else
        return(1);
}
