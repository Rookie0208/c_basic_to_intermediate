// Q07. Write a C program to count total number of negative elements in an array.

#include<stdio.h>
#include "macro"

int main() {
    printf("Enter the size of array : ");
    int n;
    inpp(n);
    int a[n], count = 0;
    printf("Enter elements : ");
    loop(i,0,n) {
        inpp(a[i]);
        if(a[i] < 0 ) count++;
    }
    outp("Total no. of negative elements are : ");
    out(count);
}