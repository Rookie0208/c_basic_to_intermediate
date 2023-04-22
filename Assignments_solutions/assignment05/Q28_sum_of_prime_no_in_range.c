// Q28. Write a C program to find sum of all prime numbers between 1 to n.

#include <stdio.h>

int check_prime(int n)
{
    int flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            return 0;
        }
    }
    return (flag == 0) ? (1) : (0);
}

int main()
{
    int n, sum=0;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int check = check_prime(i);
        if (check)
            sum += i;
    }
    printf("sum : %d", sum);
}