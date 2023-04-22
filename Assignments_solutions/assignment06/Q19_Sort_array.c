// Q19. Write a C program to sort array elements in ascending or descending order.

#include<stdio.h>
#include "macro"

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int n;
    outp("Enter the size : ");
    inpp(n);
    int a[n];

    outp("Enter array elements : ");
    loop(i,0,n) inpp(a[i]);

 outp("Original array : ");
    loop(i,0,n) printf("%d ", a[i]);
    printf("\n");

    loop(i,0,n) {
        loop(j,i+1, n) {
            if(a[j] > a[i]) {
                swap(&a[j], &a[i]);
            }
        }
    }
    outp("Array after sorting in Descending order : ");
    loop(i,0,n) printf("%d ", a[i]);
    printf("\n");

     loop(i,0,n) {
        loop(j,i+1, n) {
            if(a[j] < a[i]) {
                swap(&a[j], &a[i]);
            }
        }
    }

    outp("Array after sorting in Ascending order : ");
    loop(i,0,n) printf("%d ", a[i]);
    printf("\n");

    // loop(i,0,n) printf("%d ", a[i]);
}