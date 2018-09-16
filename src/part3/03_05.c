/* Fabian, Insert date here */
#include <stdio.h>

#define ROWS 4
#define COLUMNS 4

/*
 * Please note that when we display the 2d array grid we work with values
 * which start from 0. This means accessing an array at the 3,3 when using
 * a program we would select it at position 2,2.
 * */

int main()
{
    int grid[ROWS][COLUMNS]; //Declaration of a 2d array
    int x,y;
    
    /* initializes the array */
    for(x=0;x<ROWS;x++)
        for(y=0;y<COLUMNS;y++)
            grid[x][y] = 0;
    
    grid[2][2] = 1; // Refers the example above.

    /* display the grid */
    for(x=0; x<ROWS; x++)
    {
        for(y=0; y<COLUMNS; y++)
            printf("%d.%d: %d\t", x,y,grid[x][y]);
        putchar('\n');
    }

    return(0);
}
