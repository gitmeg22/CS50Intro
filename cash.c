// greedy algorithm
// According to the National Institute of Standards and Technology (NIST), a greedy algorithm is one “that always takes the best immediate, or local, solution while finding an answer.”
#include <stdio.h>
#include <cs50.h>
#include <math.h>

// function declard at top, defined at bottom
int get_dollars_to_cents(void);

int main(void)
{
    int coins = 0;
    int change = get_dollars_to_cents();

    while (change > 0)
    {
        if (change > 25)
        {
            coins += change / 25;
            change %= 25;
        }
        else if (change > 10)
        {
            coins += change / 10;
            change %= 10;
        }
        else if (change > 5)
        {
            coins += change / 5;
            change %= 5;
        }
        else
        {
            coins += change / 1;
            change %= 1;
        }
    }
    printf("change: %i\n", change);
    printf("coins: %i\n", coins);
}

// get a positive float from the user
// function defined at bottom, declared at top
int get_dollars_to_cents(void)
{
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);
    int cents = round(dollars * 100);
    return cents;
}




// keep track of remaining change owed
// keep track of how many coins used
// quarters, dimes, nickels, pennies
// while we can use quarters, keep adding to the counter and subtracting from the change
// as long of the remainder of the change amount divided by the quarter amount is still greater than 25
// while the change amount is greater than 25,
// divide the change amount by 25
// add 1 to the coin counter
// subtract 25 from change;

// else, while change > 10... etc.

// print counter



// TEST: return change
// output minimal number of coins needed to give change
// do not need which coins 
// ex. quarter & dime = 2
// remember newline \n at end of program

// PSEUDOCODE
// user enters change amount in float dollars
// convert change amount from a float to a rounded integer in cents
// use modulo to remove each chunk of change
// assign variables to each type of coin 

