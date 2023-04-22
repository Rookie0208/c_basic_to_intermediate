// Q17. Write a C program to put even and odd elements of array in two separate array.

#include <stdio.h>
const int N = 1e5;
int main()
{
    int n,o=1,e=1;
    int k=0, j= 0;
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
            odd[j] = a[i];
            j++;
        }
    }

    printf("Original Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Even Array : ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Odd Array : ");
    for (int i = 0; i < j; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\n");
}