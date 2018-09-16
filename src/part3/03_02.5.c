/* Fabian, Insert date here */
# include <stdio.h>
# include <string.h>

/* 
 * This is simply the previous example however inline the strcmp returns
 * 0 if there is a match and prints the granted message.
 * */

int main()
{
    char password[9]; // 8 character limitation + 1 for the null character

    printf("Enter your password: ");
    scanf("%8s", password); // 8 character limitation
    
    if(strcmp(password,"secret") == 0)
        puts("You've been granted access!");
    else
        puts("Intruder alert!");

    return(0);
}
