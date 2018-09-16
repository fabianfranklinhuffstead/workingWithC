/* Fabian, Insert date here */
# include <stdio.h>

int main()
{
    float a;
    float b = 5.0;

    printf("Input a number: ");
    scanf("%f", &a);
    printf("%.1f / %.1f = %.1f\n", a,b,a/b); 
    // .1f output limits to one decimal place. if I use .3f three decimal
    // places will appear

    return(0);
}
