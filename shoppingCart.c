#include <stdio.h>

int main()
{
    float itemCount = 0;
    float i;
    float itemsValue;
    char nextDay;

    printf("how many items in your shoping cart? ");
    scanf("%f", &itemCount);

    for (i = 1; i <= itemCount; i++)
    {
        printf("how many dollars was item %.0f? ", i);
        float currentValue;
        scanf("%f", &currentValue);
        itemsValue = itemsValue + currentValue;
    }

    if (itemsValue < 1000)
    {
        itemsValue = itemsValue * 1.05;
    };

    printf("do you want expedited next day delivery? ( y, n ) ");
    scanf(" %c", &nextDay);

    if (nextDay == 'y')
    {
        itemsValue = itemsValue * 1.10;
    };

    printf("%c\n", nextDay);

    printf("$%.2f \n", itemsValue);
    return 0;
}