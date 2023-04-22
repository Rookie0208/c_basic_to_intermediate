// Q20. Write a C program to print all ASCII character with their values.

#include<stdio.h>

int main() {
    int a,b;
    printf("Enter start number : ");
    scanf("%d", &a);
    printf("Enter last number : ");
    scanf("%d", &b);

    for(int i = a; i<=b; i++) {
        printf("%c ", i);
    }

}