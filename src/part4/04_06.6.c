/* Fabian, Insert date here */
# include <stdio.h>
# include <ctype.h>

/* 
 * Here we use pointers to encrupt a message.
 * */

char *encrypt(char *input);

int main()
{
    char *instructions = "Deliver the package to Berlin";
    
    printf("Here are your secret instructions: \n%s\n", 
            encrypt(instructions));

    return(0);
}

char *encrypt(char *input)
{
    static char output[64]; 
    /* To keep this value unchanged we set this as static
     * This piece of code will not perform correctly without making this
     * a static variable.
     *
     * This does not apply to single characters or pointers 
     *  however we have to declare arrays, strings and other variables
     * static.
     */ 
    int x = 0;

    while(*input)
    {
        if(isalpha(*input))
            output[x] = *input + 1;
        else
            output[x] = *input;
        x++;
        input++;
    }
    return(output);
}

