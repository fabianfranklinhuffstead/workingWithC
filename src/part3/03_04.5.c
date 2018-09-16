/* Fabian, Insert date here */
#include <stdio.h>

int main()
{
    char text[] = {
        'I',' ','a','m',' ','a', ' ', 's','t','r','i',
        'n','g','!','\0'    
    };
    
    /* Never write a string character like this however
     * notie that we end this with a '\0'. If we are using double quotes
     * "I am string!" we do not need to add a null value at the end as the
     * compiler automaticaly adds this. The null character is use when
     * a string is display one character at a time. */

    puts(text);

    return(0);
}
