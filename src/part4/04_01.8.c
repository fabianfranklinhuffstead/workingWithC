/* Fabian, Insert date here */
# include <stdio.h>

int main()
{
    int a;
    char b;
    float c;

    puts("Memory locations:");
    printf("A is at %p\n", &a);
    printf("B is at %p\n", &b);
    printf("C is at %p\n", &c);

    /* 
     * The %p outputs the address for each of the above variables
     * memory locations.
     *
     * */

    return(0);
}
