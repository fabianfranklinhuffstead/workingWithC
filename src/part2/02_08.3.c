/* Fabian, Insert date here */
# include <stdio.h>

void cheers(void);

int main()
{
    cheers();
    puts("Everyone pays higher taxes! \n");

    return(0);
}

void cheers(void)
{
    int x;

    for(x =0; x < 3; x++)
        printf("Huzzah! ");
    putchar('\n');
}
