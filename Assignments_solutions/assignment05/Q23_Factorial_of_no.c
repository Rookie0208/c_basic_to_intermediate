// Q23. Write a C program to calculate factorial of a number.

#include<stdio.h>

int fact(int n) {
    if(n <= 1) return 1;
    return n*fact(n-1);
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    printf("factorial of %d is %d: ",n, fact(n));
    
}