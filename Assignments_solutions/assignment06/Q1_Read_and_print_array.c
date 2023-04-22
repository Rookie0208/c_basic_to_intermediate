// Q01. Write a C program to read and print elements of array.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of the array : \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements of the array are \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}