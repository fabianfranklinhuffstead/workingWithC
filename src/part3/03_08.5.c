/* Fabian, Insert date here */
#include <stdio.h>
#include <string.h>

/* 
 * Insertion of struct into a struct
 *
 * EDIT: Which shows...
 * */

int main()
{
    // 1st struct
    struct date{
        int year;
        int month;
        int day;
    };
    // 2nd struct
    struct person{
        char name[32];
        struct date birthday;
    };
    
    struct person friend;

    strcpy(friend.name, "Fredict Castro");
    friend.birthday.year = 1975;
    friend.birthday.month = 6;
    friend.birthday.day = 1;

    printf("My friend %s was born on %d/%d/%d.\n",
           friend.name, friend.birthday.year,friend.birthday.month,friend.birthday.day);
    return(0);
}
