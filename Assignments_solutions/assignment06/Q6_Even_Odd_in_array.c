// Q06. Write a C program to count total number of even and odd elements in an array.

#include<stdio.h>
#include "macro"

int main() {
    printf("Enter the size of array : ");
    int n;
    inpp(n);
    int even = 0;
    int odd = 0;
    int a[n];

    printf("Enter the elements of array : ");
    loop(i,0,n) {
        inpp(a[i]);
        if(a[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even count is : ");
    out(even);
    printf("\n");
    printf("ODD count is : ");
    out(odd);


}