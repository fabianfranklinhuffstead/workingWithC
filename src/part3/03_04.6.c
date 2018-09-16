/* Fabian, Insert date here */
#include <stdio.h>

int main()
{
    char hello[] = "Greetings, human! \n";
    int n;

    n = 0;
    while( hello[n] != '\0') 
    /* argument can be written as hello[n] without the "!='\0'"
     * value. The null value is false. Writing as hello[n] is less
     * readable for a beginner however it simply means that while hello[n]
     * is true we run the code within the curly braces. This will eventually
     * hit the null character in the string and exit.
     * */
    {
        putchar( hello[n]);
        n++;
    }

    return(0);
}
