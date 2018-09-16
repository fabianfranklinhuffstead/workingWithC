/* Fabian, Insert date here */
#include <stdio.h>

int main()
{
    char right[] = "right";
    char left[] = "left";

    printf("%20s\n", right);
    printf("%-20s\n", left);

    /* 
     * The 20s between the $ and s is another fomatting example
     * here this means it justifies right whereas the minus sign
     * justifies left.
     * */

    return(0);
}
