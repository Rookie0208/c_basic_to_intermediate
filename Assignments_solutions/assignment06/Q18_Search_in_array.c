// Q18. Write a C program to search an element in an array.

#include <stdio.h>
const int N = 1e5;
int main()
{
    int n,max=0;
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

    int key;
    printf("Enter element to search : ");
    scanf("%d", &key);

    // binary search :
    int high = n-1, low = 0;
    while(high-low > 1) {
        int mid = (high+low) >> 1;
        if(a[mid] < key) low = mid+1;
        else high = mid;
    }
    if(a[high] == key) printf("Element found at index %d ", high);
    else if(a[low] == key) printf("Element found at index %d ", low);
    else printf("Search unsuccessfull. ");
}