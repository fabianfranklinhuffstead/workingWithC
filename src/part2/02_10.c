/* Fabian, Insert date here */
# include <stdio.h>

char gradeMe(void);

int main()
{
    char grade;

    grade = gradeMe();
    printf("On this test you recieved an %c. \n", grade);

    return(0);
}

char gradeMe(void)
{
    return('A');
}
