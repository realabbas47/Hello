#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Requests input from user
    string name = get_string("What's your name? ");
    // Print hello and the name of the person
    printf("hello, %s\n", name);
}