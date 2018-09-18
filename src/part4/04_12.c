/* Fabian, Insert date here */
# include <stdio.h>
# include <stdlib.h>

/* 
 * Structures with memory allocation using pointers.
 *
 * This type of memory allocation takes a KEY ROLE in LINKED LIST
 * */

int main()
{
    struct date{
        int month;
        int day;
        int year;
        // Declaration of int
    };
    /* Declaration of struct */

    struct date *birthday;
    /* 
     * A pointer variable is for this type of struct is create.  
     * */

    birthday = (struct date *)malloc(sizeof(struct date));

    /* 
     * Storage for this structure is allocated here courtesy of the 
     * "malloc" structure using "sizeof".
     * 
     * The structures name is use not the variable.
     * */

    if (birthday == NULL)
    {
        puts ("Memory unavaible");
        return(1);
    }


    printf("Enter your birth year: ");
    scanf("%d", &birthday->year);
    printf("Enter your birth month: ");
    scanf("%d", &birthday->month);
    printf("Enter your birt day: ");
    scanf("%d", &birthday->day);

    /*
     * The variable being reference here is not a pointer so the 
     * ampersand value is required.
     * */
    
    printf("You were born on %d/%d/%d\n", 
            birthday->month,
            birthday->day,
            birthday->year);

    return(0);
}
