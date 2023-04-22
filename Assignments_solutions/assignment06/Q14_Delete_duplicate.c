// Q14. Write a C program to delete all duplicate elements from an array.

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
        count[a[i]]++;
        // if(count[a[i]] > 1) count[a[i]]--;
        if (max < a[i])
            max = a[i];
    }

    printf("Original Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    // frequency array
    printf("New Array without any duplicate elements : ");
    for (int i = 1; i <= max; i++)
    {
        if (count[i] == 1)
            printf("%d ", i);
    }
}
