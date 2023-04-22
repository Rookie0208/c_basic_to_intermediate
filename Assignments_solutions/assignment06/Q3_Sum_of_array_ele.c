// Q03. Write a C program to find sum of all array elements.
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter size of the array : \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("The sum of elements of array is : %d", sum);
}