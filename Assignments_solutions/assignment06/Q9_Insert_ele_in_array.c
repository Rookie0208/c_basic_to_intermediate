// Q09. Write a C program to insert an element in an array.

#include <stdio.h>
#include "macro"

int main()
{
    int n;
    outp("Enter the size of array : ");
    inpp(n);

    int a[n], b[n];
    outp("Enter the elements of array : ");
    loop(i, 0, n) inpp(a[i]);

    loop(i, 0, n)
    {
        b[i] = a[i];
    }
    outp("Original array : ");
    loop(i, 0, n) printf("%d ", a[i]);
    printf("\n");

    int key, ind;
    n++;
    outp("Enter the value to insert : ");
    // inpp(a[n-1]);
    inpp(key);
    outp("Enter the index : ");
    inpp(ind);
    if (ind > n)
    {
        outp("Index is greater than the size of the array. \n");
    }
    else if (ind < 0)
    {
        outp("Index can't be negative. \n");
    }
    else
    {
        for(int i = n; i>=0; i--) {
            if(i == ind) {
             a[i] =  key; 
             break;
            }
            a[i] = a[i-1];
        }
    }

    outp("New array : ");
    loop(i, 0, n) printf("%d ", a[i]);
    printf("\n");
}