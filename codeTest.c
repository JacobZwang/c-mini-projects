#include <stdio.h>
int main()
{

    int item;
    int itemCurrent = 1;
    int itemSum = 0;
    float value1 = 1.05, value2 = 1.1;
    int itemtotal = 0;

    printf("How many item do you have int the cart\n");
    printf("Enter number of items:\n");
    scanf("%d", &item);

    int i;
    for (int i = 1; i <= item; i++)
    {
        printf("Enter price\n");
        scanf("%d", &itemCurrent);
        itemSum = itemSum + itemCurrent;
    }

    if (itemSum < 1000)
    {
        printf("A 5 percent delivery fee would be charged on %d\n", itemSum);
        itemtotal = itemSum * 1.05;
    }
    else
    {
        printf("No delivery fee\n");
        itemtotal = itemSum;
    }

    char ch;
    printf("Would you like to get 1 day shipping for 10 percent fee?\n");
    scanf(" %c", &ch);
    switch (ch)
    {
    case 'Y':
    case 'y':
        printf("%c is Yes\n", ch);
        printf("A 10 percent fee will be added\n");
        itemtotal = itemSum * 1.10;
        break;
    case 'N':
    case 'n':
        printf("No 1 day delivery\n");
        break;
    default:
        printf("No one day shipping\n");
    }

    printf("Total of price in cart %d\n", itemtotal);
    return (0);
}