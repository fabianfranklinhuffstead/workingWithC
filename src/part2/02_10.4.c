/* Fabian, Insert date here */
# include <stdio.h>

int max(int x, int y);
void isLarger(int big);

/* In the C language we can only return one value. We can return an array
 * or a structure variable from a function. However these remain single
 * variables. The main function is an int function, it requires a return
 * value and an int must be specify. The parenthese have hidden statements, 
 * which we are not require to type everytime we create a main function.
 * This does not apply to other functions which we often use.
 * */

int main()
{
    int a, b, larger;

    printf("Type two integers, seperated by spaces: ");
    scanf("%d %d", &a,&b);

    larger = max(a, b);
    if (a == larger)
        isLarger(a);
    else
        isLarger(b);

    return(0);
}

int max(int x, int y)
{
    if (x > y)
        return(x);
    return(y);
}

void isLarger(int big)
{
    printf("Value %d is larger. \n", big);
}
