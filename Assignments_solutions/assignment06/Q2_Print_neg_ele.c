// Q02. Write a C program to print all negative elements in an array.

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
        if(a[i] > 0) continue;
        printf("%d ", a[i]);
    }
}