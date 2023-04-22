// Q07.   Write a C program to find roots of a quadratic equation using switch case.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, a, b, c;
    printf("Enter the a : ");
    scanf("%d", &a);

    printf("Enter the b : ");
    scanf("%d", &b);

    printf("Enter the c : ");
    scanf("%d", &c);


    printf("The Equation is : ");
    printf("(%d)X^2 + (%d)X + (%d)", a, b, c);
    printf("\n");
    // aX^2 + bX + c;
    // roots : X = (-b +- root(b^2-4ac))/2;

    // DISCRIMINANT ******************************************
    int d1 = b * b;
    int d2 = 4 * a * c;
    int discriminant = (d1) - (d2);

    // ROOTS ******************************************
    if (d1 > d2)
        printf("Roots are real and distinct. \n");
    else if (d1 < d2)
        printf("Roots are complex. \n");
    else
        printf("Roots are real and same. \n");

/*
    int check ;
    if(discriminant > 0) check = 1;
    else if(discriminant < 0) check = 2;
    else check = 0;
*/

    double root1 = 0.0, root2 = 0.0;
    switch (discriminant > 0)
    {
    case 1:
        // FOR REAL AND DISTINCT ROOTS ******************************************
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root 1 = %f\n", root1);
        printf("root 2 = %f\n", root2);
        break;
    case 0:
        switch (discriminant < 0)
        {
        // FOR REAL AND SAME ROOTS ******************************************
        case 0:
            root1 = root2 = (-b) / (2 * a);
            printf("root 1 = %f\n", root1);
            printf("root 2 = %f\n", root2);
            break;

        case 1:
        // FOR COMPLEX ROOTS ******************************************
            root1 = (-b + discriminant);
            root2 = (-b - discriminant);
            printf("root 1 = %fi\n", root1);
            printf("root 2 = %fi\n", root2);
            break;
        }
    }
}