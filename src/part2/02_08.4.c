/* Fabian, Insert date here */
# include <stdio.h>

void cheers(void);

int main()
{
    int x;

    x = 21;
    puts("Everyone gets free dinner! \n");
    cheers();
    puts("Everyone gets free dessert! \n");
    cheers();
    printf("%d\n", x); // You cannot access this in the cheers function
    puts("Everyone pays higher taxes! \n");
    cheers();

    return(0); // Main returns control to the opperating system.
}

void cheers(void)
{
    int x;

    for(x =0; x < 3; x++)
        printf("Huzzah! ");
    return; 
    /* We do not need to specificy a value here because we are 
     * return a void value however above in the int main we return a int
     * value of 0. 
     * */
    putchar('\n'); 
    /* The ouput is messy because the putchar new line is not 
     * include in the return statement.
     * /

}
