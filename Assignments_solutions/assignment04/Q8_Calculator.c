// Q08.   Write a C program to create Simple Calculator using switch case.

#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter operand a : ");
    scanf("%f", &a);
    // fflush(stdin);
    printf("Enter operand b : ");
    scanf("%f", &b);

    printf("Enter Operation :");
    printf("\n'+' -> 1 \n'-' -> 2 \n'*' -> 3 \n'/' -> 4\n");
    int op;
    scanf("%d", &op);
    double c = 0.0;
    switch (op)
    {
    case 1:
        c = a+b;
        printf("(%.2f + %.2f) =  %.2f", a,b, c);
        break;
    case 2:
    c = a-b;
        printf("(%.2f - %.2f) =  %.2f", a, b, c);
        break;
    case 3:
    c = a*b;
        printf("(%.2f * %.2f) =  %.2f", a, b,(a * b));
        break;
    case 4:
        if (b != 0)
            printf("(%.2f / %.2f) =  %.2f", a, b, (a / b));
        else printf("Divide by zero error. ");
        break;

    default:
        printf("Enter valid operation : \n TERMINATED !!\n");
        break;
    }
}