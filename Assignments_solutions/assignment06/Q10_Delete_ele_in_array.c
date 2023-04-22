// Q10. Write a C program to delete an element from an array at specified position.

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
    
    int key;
    outp("Enter the index of the element to delete : ");
    inpp(key);

    if(key > n) {outp("Index is greater than the size of the array. \n");}
    else if(key < 0) {outp("Index can't be negative. \n");}
    else {
        loop(i,0,n) {
            if(i == key) {
                int j = i;
                while(j < n) {
                a[j] = a[j+1];
                j++;
                }
                n--;
                break;
            }
        }
    }
    outp("New array : ");
    loop(i,0,n) printf("%d ", a[i]);

}