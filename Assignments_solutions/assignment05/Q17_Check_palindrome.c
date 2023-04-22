// Q17. Write a C program to check whether a number is palindrome or not.

#include<stdio.h>
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
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

int rev = reverse(n);
(n == rev) ? printf("The given no. is Palindrome. ") : printf("The given no. is not a Palindrome.");
   
}