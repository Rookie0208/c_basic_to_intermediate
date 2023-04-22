// Q16. Write a C program to find reverse of an array.

#include <stdio.h>
const int N = 1e5;
int main()
{
    int n, max = 0, ct = 0;
    int count[100] = {0};
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Original Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Reversed Array : ");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}