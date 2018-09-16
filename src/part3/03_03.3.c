/* Fabian, Insert date here */
# include <stdio.h>

# define INPUT_MAX 64

/* A previous example of code however here we are using
 * constants.
 * */ 

int main()
{
    char input[INPUT_MAX];

    printf("Instructions: ");
    fgets(input, INPUT_MAX, stdin);
    puts("Thank you! Here are your instructions:");
    puts(input);

    return(0);
}
