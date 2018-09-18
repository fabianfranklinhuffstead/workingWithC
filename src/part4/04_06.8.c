/* Fabian, Insert date here */
# include <stdio.h>

/* This is a pointer array */

int main()
{
    char *gang[5] = {
        "Spanky", 
        "Buckwheat", 
        "Alfalfa",
        "Darla",
        "Pete the pup"
    };
    int x;

    for(x=0;x<5;x++)
        printf("%p\n", gang[x]);// We have added $p for the memory address

    return(0);
}
