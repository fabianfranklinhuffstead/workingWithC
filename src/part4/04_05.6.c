/* Fabian, Insert date here */
# include <stdio.h>

/*  Previous example however using a pointer*/

int main()
{
    char *string = "I'm just a normal string. \n";
    char *ptr; // represents characters

    ptr = string;
    while(*ptr) // represents characters
    {
        putchar(*ptr); // represents characters
        ptr++; // represent memory location

    }

    return(0);
}
