// Q01. Write a C program to print day of week name using switch case.

#include<stdio.h>

int main() {
    int day;
    printf("Enter the Week (1-7) : ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Sunday \n");
        break;
    case 2:
        printf("Monday \n");
        break;
    case 3:
        printf("Tueday \n");
        break;
    case 4:
        printf("Wednesday \n");
        break;
    case 5:
        printf("Thursday \n");
        break;
    case 6:
        printf("Friday \n");
        break;
    case 7:
        printf("Saturday \n");
        break;
    default:
        printf("Enter valid week (1-7) ");
        break;
    }
}