#include <stdio.h>
int isPositive(int a)
{
    if (a > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int ia;
    printf("input: ");
    scanf("%d", &ia);
    int positive = isPositive(ia);
    if (positive)
    {
        printf("%d is positive.\n", ia);
    }
    else
    {
        printf("%d is not positive.\n", ia);
    }
    return 0;
}