/* Fabian, Insert date here */
# include <stdio.h>

/*
 * !important note if I instatiate my function before my main method
 * the program will run as normal. However if it is below as shown in the
 * example I will have to instantiate it ("void drink(void);") first.
 * */

void drink(void);

int main()
{
    printf("For breakfast I had ");
    drink();
    printf("For lunch I had ");
    drink();
    printf("For dinner I had ");
    drink();

    return(0);
}

void drink(void)
{
    puts("English Breakfast Tea!");
}
