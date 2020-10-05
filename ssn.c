// In the space provided below write a C program that creates a security access code from a social security number entered by a user as follows : Using a recursive function it adds all of the digits of the social security number and then using a regular function gets the square number of the sum and displays it.The access code displayed should be initialized as an integer number but using type casting is displayed as a floating number.

#include <stdio.h>

int compute(i, total)
{
    if (i < 9)
    {
        int current;
        scanf("%d", &current);

        return compute(i + 1, total + current);
    }
    return total;
}

int square(total)
{
    return (float)total * total;
}

int main()
{
    printf("Enter your social security number pressing enter after each digit\n");

    printf("%d\n", square(compute(0, 0)));
    return 0;
}