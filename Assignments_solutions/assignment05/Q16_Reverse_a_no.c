// Q16. Write a C program to enter a number and print its reverse.

#include <stdio.h>

int reverse(int n)
{
    int ans = 0, rem = 0;
    while (n >= 1)
    {
        rem = n % 10;
        ans = ans * 10 + rem;
        n /= 10;
    }

    return ans;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Reverse of %d is %d ", n, reverse(n));
}