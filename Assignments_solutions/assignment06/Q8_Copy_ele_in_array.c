// Q08. Write a C program to copy all elements from an array to another array.

#include<stdio.h>
#include "macro"

int main() {
    int n;
    outp("Enter the size of array : ");
    inpp(n);

    int a[n],b[n];
    outp("Enter the elements of array : ");
    loop(i,0,n) inpp(a[i]);

    loop(i,0,n) {
        b[i] = a[i];
    }
    outp("Original array : ");
    loop(i,0,n) printf("%d ", a[i]);
    printf("\n");
    outp("Copied array : ");
    loop(i,0,n) printf("%d ", b[i]);


}