/* Fabian, Insert date here */
# include <stdio.h>

/* 
 * Notice here that in the minus10 function we return no
 * value. This is because using pointers this is directly
 * access in memory.
 * 
 * */

void minus10(int *v);

int main()
{
    int value = 100;
    
    printf("1. Value is %d\n", value);
    minus10(&value);
    printf("2. Value is %d\n", value);

    return(0);
}

void minus10(int *v)
{
    *v = *v - 10;
}

