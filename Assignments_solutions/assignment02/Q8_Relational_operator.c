/*
8.  Write a C program A relational operator checks the relationship between two operands. 
If the relation is true, it returns 1; if the relation is false, it returns value 0.
Operator    Meaning of Operator    Example
==    Equal to                  5 == 3 is evaluated to 0
>    Greater than                  5 > 3 is evaluated to 1
<    Less than                  5 < 3 is evaluated to 0
!=    Not equal to                  5 != 3 is evaluated to 1
>=    Greater than or equal to      5 >= 3 is evaluated to 1
<=    Less than or equal to           5 <= 3 is evaluated to 0
*/

#include<stdio.h>

int main() {
    int a,b;
    printf("Enter value a : ");
    scanf("%d", &a);
    printf("Enter value b : ");
    scanf("%d", &b);

    if(a > b) {
        printf("%d > %d is evaluated to 1\n", a,b);
        printf("%d < %d is evaluated to 0\n", a,b);
        printf("%d >= %d is evaluated to 1\n", a,b);
        printf("%d <= %d is evaluated to 0\n", a,b);
    }
    if(a < b) {
        printf("%d < %d is evaluated to 1\n", a,b);
        printf("%d > %d is evaluated to 0", a,b);
        printf("%d >= %d is evaluated to 1\n", a,b);
        printf("%d <= %d is evaluated to 0\n", a,b);
    }
    if(a == b) {
        printf("%d == %d is evaluated to 1\n", a,b);
        printf("%d >= %d is evaluated to 1", a,b);
        printf("%d != %d is evaluated to 0", a,b);
    }
    if(a != b) {
        printf("%d != %d is evaluated to 1\n", a,b);
        printf("%d == %d is evaluated to 0", a,b);
    }
}