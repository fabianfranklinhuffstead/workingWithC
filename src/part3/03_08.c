/* Fabian, Insert date here */
#include <stdio.h>

/*
 * The struct is given a name follow by int account and float balance.
 * 
 * You can see how that this is very functional in the way that is deliver
 * we use the struct record and create a variable my_bank or struct type
 * record. 
 *
 * Fianlly we print the value
 *
 * */

int main()
{
    struct record {
        int account;
        float balance;
    };
    
    struct record my_bank;
    
    my_bank.account = 123456;
    my_bank.balance = 6543.21;

    printf("My account number is %d, and my current balance is %.2f\n", my_bank.account, my_bank.balance);

    return(0);
}
