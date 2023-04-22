// Q05. Write a C program to find second largest element in an array.

#include <stdio.h>
#include "macro"
void swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}
int main()
{
    int n, max = 0, min = 1e7;
    printf("Enter size of the array : \n");
    scanf("%d", &n);
    int a[n];
    int count = 0;
    printf("Enter elements of the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    loop(i,0,n) {
        loop(j,i+1,n) {
            if(a[j] > a[i]) {
                swap(&a[i], &a[j]);
            }
        }
    }
    printf("The Second largest element in the array is %d \n", a[1]);
    
}