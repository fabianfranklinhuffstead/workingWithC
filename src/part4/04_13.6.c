/* Fabian, Insert date here */
# include <stdio.h>
# include <stdlib.h>

/*
 * ------------------ Linked List ---------------------
 *
 * Dynamically adding structures.
 * Add use of functions to clean up repeatable code
 * The addition here is the fill structure function **
 * 5 Structures built in the linked list
 * Link list structures display
 * */

// Creating global variables is usually done by defining it
// outside of any other function.

// GLOBAL
struct stats{
        int account;
        float balance;
        struct stats *next; //a pointer to another stats struct
    };
  
void fill_structure (struct stats *s); // **
struct stats* create(void); // allocates storage for one stats struct

int main()
{
    struct stats *first; // Not currently use
    struct stats *current; // Not currently use
    struct stats *new; /* Change nameif necessary */ // Not currently use
    int x; // For for loop

    // In C new is not a keyword however in C++ new is. We can compile
    // this code using a C compiler however will break using a C++ Compiler
    //

    /* Create first structure */
    first = create();
    current = first;

    // Building 5 structures
    for(x=0;x<5;x++)
    {
        if(x==0) // First pointer
        {
            first = create();
            current = first;
        }
        else
        {
            new = create();
            current->next = new; // Link part of the link list
            current = new; 
            // Sets current structure to point at the new structure
            // Moves forward in the list.
        }
        fill_structure(current); // Current is same as first
    }
    current->next = NULL; // End of list flag

    return(0);
}
/* Fill a structure */
void fill_structure (struct stats *s)
{
    printf("Account number: ");
    scanf("%d", &s->account);
    printf("Balance: $");
    scanf("%f", &s->balance);
    s->next = NULL; // Marks the end of linked list
}

/* Allocate storage for one new structure */
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
