// QUES 2 : Write a C program print total number of days in a month using switch case.

#include<stdio.h>

int main() {
    // char m[10];
    int month;
    printf("Enter the Month (1-12) : ");
    scanf("%d", &month);
    // scanf("%s", m);


    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 \n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 \n");
        break;
    case 2:
        printf("either 28 or 29 \n");
        break;
    default:
        printf("Enter valid month (1-12) ");
        break;
    }

}