/*
9. An expression containing logical operator returns either 0 or 1 depending upon
whether expression results true or false. Logical operators are commonly used in
decision making in C programming.

  Operator
  &&
  ||
  !
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter value a : ");
    scanf("%d", &a);
    printf("Enter value b : ");
    scanf("%d", &b);
    // printf("Enter value c : ");
    // scanf("%d", &c);

    // if both values are true return true.
    if(a > 18 && b < 60) printf("You can vote. \n");
    

    // '||' OPERATOR.
    if(a > 18 || b < 60) printf(" You can do your job. \n" );
}