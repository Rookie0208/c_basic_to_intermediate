// Q27. Write a C program to print all Prime numbers between 1 to n.

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
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int check = check_prime(i);
        if (check)
            printf("%d ", i);
    }
    // (check == 0) ? printf("The given no. is prime no. \n") : printf("The given no. is not a prime no. \n");
}