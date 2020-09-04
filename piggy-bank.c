#include <stdio.h>

int main()
{
    int pennies = 0;
    int nickles = 0;
    int dimes = 0;
    int quarters = 0;
    int total = 0;

    printf("How many pennies do you have? ");
    scanf("%d", &pennies);

    printf("How many nickles do you have? ");
    scanf("%d", &nickles);

    printf("How many dimes do you have? ");
    scanf("%d", &dimes);

    printf("How many quarters do you have? ");
    scanf("%d", &quarters);

    total = pennies + (nickles * 5) + (dimes * 10) + (quarters * 25);

    if (total < 100)
    {
        printf("You have %d Cents \n", total);
    }
    else
    {
        double dollars = (double)total / 100.0;
        printf("You have %.2f Dollars \n", dollars);
    }
    return 0;
}