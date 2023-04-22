// Q30. Write a C program to check whether a number is Armstrong number or not.

#include<stdio.h>

// program to find the cube root.
int cube(int a, int b) {
    // 2^3 = 2^(011) = 2^(2+1) = 2^2 * 2^1 = 4*2 = 8
    int ans = 1;
    while(b) {
        if(b&1) {           // if LSB = 1 then consider that bit into the ans.
            ans = ans*a;    
        }
        a = a*a;
        b >>= 1;
    }
return ans;
}

int check_armstrong(int n) {
    int sum = 0;
    while(n >= 1) {
        int rem = n%10;
        int check = cube(rem,3);
        sum += check;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int ans = check_armstrong(n);
    (ans == n) ? printf("It is an Armstrong no.") : printf("It is not an Armstrong no.");
}