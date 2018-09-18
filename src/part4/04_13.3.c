/* Fabian, Insert date here */
# include <stdio.h>
# include <stdlib.h>

/*
 * ------------------ Linked List ---------------------
 *
 * Dynamically adding structures.
 * Add use of functions to clean up repeatable code
 *
 *
 * */

// Creating global variables is usually done by defining it
// outside of any other function.

// GLOBAL
struct stats{
        int account;
        float balance;
        struct stats *next; //a pointer to another stats struct
    };
  
struct stats* create(void); // allocates storage for one stats struct

int main()
{
    struct stats *first; // Not currently use
    struct stats *current; // Not currently use
    struct stats *new; /* Change nameif necessary */ // Not currently use

    // In C new is not a keyword however in C++ new is. We can compile
    // this code using a C compiler however will break using a C++ Compiler
    //
    int a =1;

    /* Create first structure */
    first = create();

    return(0);
}

struct stats *create(void)
{
    struct stats *baby;

    baby = (struct stats*)malloc(sizeof(struct stats));
    if (baby == NULL)
    {
        puts("Memory error");
        exit(1); // Causes program to immediately exit (stdlib func)
    }
    return (baby);
}
