#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get an integer for the height of the pyramid
    int height;
    do
    {
        height = get_int("Height: ");
    }
    //make sure the input is a positive integer b/w 1 - 8
    while (height < 1 || height > 8);

    //i sets the column
    for (int i = 1; i <= height; i++) 
    {
        //z sets the number of dots/spaces
        for (int z = height; z > i; z--)
        {
            printf(" ");       
        }
        //j sets how many hashes are in a row
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
