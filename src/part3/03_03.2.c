/* Fabian, Insert date here */
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/*Constants examples */

# define ROWS 20
# define COLUMNS 7

/* One benefit of using constants is being able to
 * easly change values without having to dig through code.
 * This example we can change the ROWS or COLUMNS values. 
 * */

int main()
{
    int row, column;

    srand((unsigned)time(NULL));

    for(row=0;row<ROWS; row++)
    {
        for(column=0;column<COLUMNS;column++)
            printf("%2d\t", rand() % 100);
        putchar('\n');
    }

    return(0);
}
