#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // get positive number b/w 1-8 inclusive
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // i = row number
    for (int i = 1; i <= height; i++)
    {
        // z = number of spaces
        for (int z = height; z > i; z--)
        {
            printf(" ");
        }

        // j = number of hashes on left pyramid
        for (int j = 0; j < i; j++) // j = 0
        {
            printf("#");
        }

        printf("  "); // the spaces b/w the half-pyramids
        
        // j = number of hashes on right pyramid
        for (int j = 0; j < i; j++) // j = 0
        {
            printf("#");
        }
        printf("\n");
    }
}
