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
    printf("%d", result);
    return 0;
}
