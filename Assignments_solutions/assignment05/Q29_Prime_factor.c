// Q29. Write a C program to find all prime factors of a number.

// MUJHE SAMJH NHI AAYA YE CODE : 
#include <stdio.h>

void find_factor(int n) {
    while(n % 2 == 0) {
        printf("%d ", 2);
        n /= 2;
    }
    for(int i = 3; i<=n; i++) {
        while(n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    // if(n > 2) printf("%d ", n);
}

int main()
{
    int n, check = 0;
    printf("Enter the number : ");
    scanf("%d", &n);

    find_factor(n);
}