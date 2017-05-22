#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define NICKEL 5;
#define DIME 10;
#define QUARTER 25;

int main(void) {
    float change = 0;
    int cents = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int leftovers = 0;
    int coins = 0;

    do {
       printf("How much change is owed? ");
        change = get_float();
    } while (change <= 0);

    cents = (int)round(change * 100);

    quarters = cents / QUARTER;
    leftovers = cents % QUARTER;

    dimes = leftovers / DIME;
    leftovers = leftovers % DIME;

    nickels = leftovers / NICKEL;
    leftovers = leftovers % NICKEL;

    coins = quarters + dimes + nickels + leftovers;

    printf("\nYou are owed %i coins\n", coins);

}
