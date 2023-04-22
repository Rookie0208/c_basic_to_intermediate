// Q04. Write a C program to find maximum and minimum element in an array.

#include <stdio.h>

int main()
{
    int n, max = 0, min = 1e7;
    printf("Enter size of the array : \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] > max) {max = a[i];}
        if(a[i] < min) {min = a[i];}
    }
    printf("Maximum element in the array is %d \n", max);
    printf("Minimum element in the array is %d \n", min);
    
}