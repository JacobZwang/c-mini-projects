#include <stdio.h>

int main()
{
    int input;
    printf("pick a number and I'll add 100 to it: ");
    scanf("%d", &input);

    int num;
    num = sum(input);

    printf("%d \n", num);
    return 0;
}

int sum(a)
{
    return a + 100;
}