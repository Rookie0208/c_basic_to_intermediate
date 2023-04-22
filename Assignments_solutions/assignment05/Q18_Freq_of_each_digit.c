// Q18. Write a C program to find frequency of each digit in a given integer.
#include <stdio.h>
void solve(int n)
{
    int rem = 0, max = 0;
    int a[50] = {0};
    while (n >= 1)
    {
        rem = n % 10;
        // ans = ans * 10 + rem;
        a[rem]++;
        if (max < rem)
            max = rem;
        n /= 10;
    }
    for (int i = 0; i <= max; i++)
    {
        printf("The count of %dth element is %d\n", i, a[i]);
    }
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    solve(n);
}