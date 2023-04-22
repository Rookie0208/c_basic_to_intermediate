// Q06.   Write a C program to check whether a number is positive, negative or zero using switch case.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    /*
// WITH IF CONDITION : ***********************************
    int check;
    if (num > 0)
        check = 1;
    else if (num < 0)
        check = 2;
    else
        check = 0;
    switch (check)
    {
    case 1:
        printf("Positive \n");
        break;
    case 0:
        printf("Zero \n");
        break;
    case 2 :
        printf("Negative\n");
        break;
    default:
        printf("ERROR ");
        break;
    }

    */
    switch (num > 0)
    {
    // FOR POSITIVE VALUES **************************************************
    case 1:
        printf("Positive \n");
        break;
    case 0:
        switch (num < 0)
        {
        // FOR ZERO **************************************************
        case 0:
            printf("Zero \n");
            break;
        // FOR NEGATIVE VALUES **************************************************
        case 1:
            printf("Negative\n");
            break;
        }
    }
}