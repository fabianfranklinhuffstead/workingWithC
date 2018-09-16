/* Fabian, Insert date here */
# include <stdio.h>
# include <string.h>

int main()
{
    char password[9]; // 8 character limitation + 1 for the null character
    int compare;

    printf("Enter your password: ");
    scanf("%8s", password); // 8 character limitation
    compare = strcmp(password,"secret");
    if(compare == 0)
        puts("You've been granted access!");
    else
        puts("Intruder alert!");

    return(0);
}
