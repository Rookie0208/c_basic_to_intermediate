// 10. Write a C program to enter a four digit number and print all digit.

#include <stdio.h>

int solve(int n, int result)
{

    return result;
}
int main()
{
    int n;
    printf("Enter a four digit no. : ");
    scanf("%d", &n);
    int result = 0;
    while (n >= 1)
    {
        int rem = n % 10;
        result = result * 10 + rem;
        n /= 10;
    }
    // printf("%d\n", result);
    int ans = 0;

    printf("Your four digits are : \n");
    while (result >= 1)
    {
        int rem = result % 10;
        ans = ans * 10 + rem;
        printf("%d ", rem);
        result /= 10;
    }

}