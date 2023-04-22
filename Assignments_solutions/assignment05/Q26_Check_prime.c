// Q26. Write a C program to check whether a number is Prime number or not.
#include<stdio.h>

int main()
{
    int n,check = 0;
    printf("Enter the number : ");
    scanf("%d", &n);

    for(int i = 2; i<n; i++) {
        if(n%i == 0) {
            check = 1;
            break;
        }
    }
    (check == 0) ? printf("The given no. is prime no. \n") : printf("The given no. is not a prime no. \n");
    
}