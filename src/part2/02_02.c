/* Fabian, Insert date here */
# include <stdio.h>

int main()
{
    char a;
    
    printf("Your choice (1,2,3): ");
    scanf("%c", &a);

    switch(a)
    {
        case '1':
            puts("Excellent choice!");
            break;
        case '2':
            puts("This is the most common choice.");
            break;
        case '3':
            puts("I question your judgement.");
            break;
        default:
            puts("That's not a valid choice.");
    }    
        /* An interesting piece of information here is that without
         * each of the break statements the code will follow thourgh each
         * subsequent case statement. Notice on the default statement we
         * have no break statement.
         * */

    return(0);
}
