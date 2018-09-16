/* Fabian, Insert date here */
#include <stdio.h>
#include <string.h>

int main()
{
    struct person {
        char name[32];
        int age;
    };
    
    struct person president;

    strcpy(president.name = "George Washington");
    /* 
     * president.name = "George Washington" will not work so we use the
     * string.h along with strcpy to fix the incompatible error. 
     *
     * You cannot use the assignment operator with a string thats because
     * strings are not variables they are arrays.
     * */
    president.age = 67;

    printf("%s was %d years old\n", president.name, president.age);
    return(0);
}
