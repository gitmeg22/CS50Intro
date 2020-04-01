#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //ask user for string input
    string name = get_string("Name, please...\n");
    //output hello and string input
    printf("hello, %s\n", name);
}
