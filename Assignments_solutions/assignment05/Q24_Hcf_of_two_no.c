// Q24. Write a C program to find HCF (GCD) of two numbers.

#include<stdio.h>

// EUCLID ALGORITHM : divide method.
int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main()
{
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);

    printf("GCD of (%d,%d) is %d ",a,b, gcd(a,b));
    
}