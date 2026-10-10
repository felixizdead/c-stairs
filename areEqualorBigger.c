#include <stdio.h>
int getBigger(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int areEqual(int a, int b)
{
    if (a == b)
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
    int ib;
    printf("First input: ");
    scanf("%d", &ia);
    printf("Second input: ");
    scanf("%d", &ib);
    int equal = areEqual(ia, ib);
    if (equal)
    {
        printf("Both numbers are equal (%d).\n", ia);
    }
    int bigger = getBigger(ia, ib);
    if (!equal)
    {
        printf("%d is bigger\n", bigger);
    }
    return 0;
}