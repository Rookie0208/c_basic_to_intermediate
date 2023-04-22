// Q19. Write a C program to enter a number and print it in words.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count;
char names[10][100] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "zero"};
int solve(int n)
{
    int rem = 0, ans = 0;
    while (n >= 1)
    {
        rem = n % 10;
        ans = ans * 10 + rem;
        n /= 10;
        count++;
    }
    return ans;
}

void solve1(int n)
{
    int rem = 0;
    while (n >= 1)
    {
        rem = n % 10;
        // ONLY WORKS FOR 4 DIGIT NUMBER.
        if (count == 4)
        {
            printf("%s THOUSAND ", names[rem - 1]);
        }
        if (count == 3)
        {
            printf("%s HUNDRED ", names[rem - 1]);
        }
        if (count == 2)
        {
            printf("%s TENS ", names[rem - 1]);
        }
        if (count == 1)
        {
            printf("%s ONES ", names[rem - 1]);
        }
        n /= 10;
        count--;
    }
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    // printf("%c", names[1]);
    int rev = solve(n);
    // printf("%d", rev);
    solve1(rev);
}