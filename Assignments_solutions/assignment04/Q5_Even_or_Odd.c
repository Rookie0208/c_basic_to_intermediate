//  Q05.   Write a C program to check whether a number is even or odd using switch case.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
  
    switch (num % 2)
    {
    case 1:
        printf("ODD \n");
        break;
    case 0:
        printf("EVEN \n");
        break;
    default:
        printf("ERROR ");
        break;
    }
}