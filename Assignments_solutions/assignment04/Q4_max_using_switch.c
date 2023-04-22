#include<stdio.h>

int main(){
int a,b;
printf("enter the values\n");
scanf("%d %d",&a,&b);
printf("values entered\n");

int diff = a-b;
int flag;
diff>0?(flag=1):(flag=0);
diff==0?((printf("same values!!\n**********************\nwrong output\n"))):(diff=diff);
switch (flag)
{
case 1:
    printf("%d is greater than %d\n",a,b);
    break;
case 0:
    printf("%d is smaller than %d\n",b,a);
    break;
}






}