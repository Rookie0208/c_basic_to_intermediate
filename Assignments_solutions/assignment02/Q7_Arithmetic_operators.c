// 7. Write a C program to performs mathematical operations such as addition, subtraction, multiplication, division etc on numerical values (constants and variables).

#include <stdio.h>

double add(float a, float b) {
    return (a+b);
}
double sub(float a, float b) {
    return (a-b);
}
double div(float a, float b) {
    if(b != 0) return (a/b);
    return -1;
}
int modul(int a, int b) { 
    return (a%b);
}
double mul(double a, double b) { 
    return (a*b);
}

int main()
{
    float a, b;

    printf("Enter operand a : ");
    scanf("%f", &a);

    printf("Enter operand b : ");
    scanf("%f", &b);

    printf("(%.2f + %.2f) =  %.2f",a,b,add(a,b));
    printf("\n");
    printf("(%.2f - %.2f) =  %.2f",a,b,sub(a,b));
    printf("\n");
    printf("(%.2f / %.2f) =  %.2f",a,b,div(a,b));
    printf("\n");
    printf("(%.2f * %.2f) =  %.2f",a,b,mul(a,b));
    printf("\n");
    printf("(%d mod %d) =  %d",(int)a,(int)b,modul((int)a,(int)b));
}