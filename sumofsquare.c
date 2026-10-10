#include <stdio.h>
int Square(int number)
{
    return number * number;
}
int sumofSquares(int a, int b)
{
    return Square(a) + Square(b);
}
int main()
{
    int ia, ib;
    printf("first input: ");
    scanf("%d", &ia);
    printf("second input: ");
    scanf("%d", &ib);
    int sumofsquares = sumofSquares(ia, ib);
    printf("Sum of squares: %d\n", sumofsquares);
    return 0;
}