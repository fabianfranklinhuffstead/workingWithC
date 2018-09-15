/* Fabian, Insert date here */
# include <stdio.h>

/* 
 * ------------------Anatomy of a funciton---------------------
 * type name (arguments)
 * -- Examples --
 *  void alpha (void)
 *  The function name alpha, it returns no values (void type).
 *  It has no arguments (void)
 *
 *  int count (void)
 *  The function named count
 *  It returns an integer value (int type).
 *  It has no arguments (void)
 *
 *  void hangUp(char ch)
 *  The function name hangUp
 *  It returns no value (void type)
 *  It has one argument, a char variable ch
 *
 * */
void uniqueFunction(void);

int main()
{
    puts("The main() function always runs first");
    uniqueFunction();
    uniqueFunction();
    puts("Thanks, uniqueFunction()");

    return(0);
}

void uniqueFunction(void)
{
    puts("The uniqueFunction() function runs when it is called");
}
