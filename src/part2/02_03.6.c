/* Fabian, Insert date here */
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{
    int x, r;
    
    srand((unsigned)time(NULL)); /* Seed randomizer */

    x = 10;
    while(x > 0)
    {
        r = rand();
        printf("%2d\n", r % 100); 
        /* The 2d here sets the width to characters wide right justified */
        x--;
    }

    return(0);
}
