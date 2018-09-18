/* Fabian, Insert date here */
# include <stdio.h>

int main()
{
    char c;
    int i;
    float f;
    char buffer[128];
    long unsigned total;

    total = 0;
    total = total + sizeof(c);
    total = total + sizeof(i);
    total = total + sizeof(f);
    total = total + sizeof(buffer);

    return(0);
}
