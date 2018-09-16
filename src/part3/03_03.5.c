/* Fabian, Insert date here */

int main()
{
    int row, column;

    srand((unsigned)time(NULL));

    for(row=0;row<ROWS; row++)
    {
        for(column=0;column<COLUMNS;column++)
            printf("%2d\t", rand() % 100);
        /* 2df we have right align if we remove this
         * we will end up with unformat outputs.
         * */
        putchar('\n');
    }

    return(0);
}
