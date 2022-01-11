#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //grab name of person
    string name = get_string("What's your name?");
    //print hello with name
    printf("hello, %s\n", name);
}