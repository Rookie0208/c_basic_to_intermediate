#include <stdio.h>

int main()
{
    printf("Enter two inputs\n");
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("\n%d is greater than %d", a, b);

    else if (a < b)
    {
        printf("\n%d is greater than %d", b, a);
    }
    else
        printf("none of them is greater");
}