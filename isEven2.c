#include <stdio.h>
int isEven(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int ia;
    printf("Enter number: ");
    scanf("%d", &ia);

    int result = isEven(ia);
    if (result == 1)
    {
        printf("%d is even.\n", ia);
    }
    else
    {
        printf("%d is odd.\n", ia);
    }

    return 0;
}
