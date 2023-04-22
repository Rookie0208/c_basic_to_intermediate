// Q25. Write a C program to find LCM of two numbers.

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

    printf("LCM of (%d,%d) is %d ",a,b, ((a*b)/gcd(a,b)));
//  ((a,b)/gcd(a,b)) : lcm(a,b) = (a*b)/hcf(a,b); 
// lcm * hcf = a*b  
}