#include<stdio.h>

int main(){
    int a,b;
    printf("ENter the value\n");
    scanf("%d%d",&a,&b);
    printf("value of a--> %d\n value of b-->%d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Numbers after swapping are: \nvalue of a--> %d\n value of b-->%d\n",a,b );

}