// 11. Write a C program to enter a five digit number and find sum and difference of all digit

#include<stdio.h>

int main() {
    int n; 
    printf("Enter a five digit no. : ");
    scanf("%d", &n);

    printf("Your five digit no. is : ");
    printf("%d", n);
    printf("\n");

int num = n;
int sum = 0, diff = 0;;
    while(num >= 1 ) {
        int last_digit = num%10;
        sum += last_digit;
        diff -= last_digit;
        num /= 10;
    }
    printf("Your five digit no. sum is : ");
    printf("%d", sum);

    printf("\n");

    printf("Your five digit no. difference is : ");
    printf("%d", diff);
}