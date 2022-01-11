#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

int main(void)
{
    //Set float values
    float quarters = 25;
    float dimes = 10;
    float nickels = 5;
    float pennys = 1;
    float coins = 0.0;
    float left_over = 0;

    //Set int values
    int total_coins = 0;
    int x;

    //Declare global float
    float cents;
    //Get change amount and check for non-negatives
    do
    {
        cents = get_float("Change Owed: ");
        x = round(cents * 100);
        printf("x: %d\n", x);
    }
    while (x < 0);

    //Check for quarters
    if (x >= quarters)
    {
        left_over = fmod(x, quarters);
        coins = ((x - left_over) / quarters);
        x = left_over;
        total_coins = coins;
    }
    //Check for dimes
    if (x > dimes || x < quarters)
    {
        left_over = fmod(x, dimes);
        coins = ((x - left_over) / dimes);
        x = left_over;
        total_coins = total_coins + coins;
    }
    //Check for nickels
    if (x > nickels || x < dimes)
    {
        left_over = fmod(x, nickels);
        coins = ((x - left_over) / nickels);
        x = left_over;
        total_coins = total_coins + coins;
    }
    //Check for pennys
    if (x < nickels)
    {
        left_over = fmod(x, pennys);
        coins = ((x - left_over) / pennys);
        x = left_over;
        total_coins = total_coins + coins;
        printf("%d\n", total_coins);
    }
}