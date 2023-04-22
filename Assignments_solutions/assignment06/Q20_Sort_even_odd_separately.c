// Q17. Write a C program to put even and odd elements of array in two separate array.

#include <stdio.h>
#include "macro"
const int N = 1e5;
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n,o=1,e=1;
    int k=0, p= 0;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n], odd[o], even[e];
    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] % 2 == 0) {
            even[k] = a[i]; 
            k++;
        }
        else {
            odd[p] = a[i];
            p++;
        }
    }

    printf("Original Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    loop(i,0,k) {
        loop(j,i+1, k) {
            if(even[j] < even[i]) {
                swap(&even[j], &even[i]);
            }
        }
    }

loop(i,0,p) {
        loop(j,i+1, p) {
            if(odd[j] < odd[i]) {
                swap(&odd[j], &odd[i]);
            }
        }
    }
    printf("Even Array : ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Odd Array : ");
    for (int i = 0; i < p; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\n");
}