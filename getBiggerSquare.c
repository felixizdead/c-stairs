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
int Square(int number)
{
    return number * number;
}
int getBiggerSquare(int a, int b)
{
    int bigger = getBigger(a, b);
    return Square(bigger);
}
int main()
{
    int ia;
    int ib;
    printf("First number: ");
    scanf("%d", &ia);
    printf("Second number: ");
    scanf("%d", &ib);
    int getBiggerSquareResult = getBiggerSquare(ia, ib);
    printf("The square of the bigger number: %d\n", getBiggerSquareResult);
    return 0;
}
