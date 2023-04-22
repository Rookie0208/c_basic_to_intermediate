// Q15. Write a C program to merge two array to third array.
#include <stdio.h>
const int N = 1e5;
int main()
{
    int a1, b1, max = 0;
    int count[100] = {0};
    printf("Enter the size of 1st array : ");
    scanf("%d", &a1);

    int a[a1], b[b1], c[a1 + b1];
    printf("Enter the elements of 1st array : ");
    for (int i = 0; i < a1; i++)
    {
        scanf("%d", &a[i]);
        // count[a[i]]++;
        // if(max < a[i]) max = a[i];
    }

    printf("Enter the size of 2nd array : ");
    scanf("%d", &b1);

    printf("Enter the elements of 2nd array : ");
    for (int i = 0; i < b1; i++)
    {
        scanf("%d", &b[i]);
        // count[a[i]]++;
        // if(max < a[i]) max = a[i];
    }

    printf("1st Array : ");
    for (int i = 0; i < a1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("2nd Array : ");
    for (int i = 0; i < b1; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");

    // 3rd array :
    for (int i = 0; i < a1 + b1; i++)
    {
        if (i < a1)
            c[i] = a[i];
        if (i >= a1)
            c[i] = b[i - a1];
    }
    printf("3rd Array : ");
    for (int i = 0; i < a1 + b1; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
}
