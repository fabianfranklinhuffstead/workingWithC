/* Fabian, Insert date here */
# include <stdio.h>

void evaluate(int x);

int main()
{
    int i;

    printf("Type an integer value: ");
    scanf("%d", &i);
    evaluate(i);

    return(0);
}

void evaluate(int x)
{
    if(x > 10)
    {
        printf("This value is greater than 10");
    }
    else if(x < 10)
    {
        printf("This value is less than 10");
    }
    else
    {
        printf("This value is 10");
    }
    putchar('\n');
}
