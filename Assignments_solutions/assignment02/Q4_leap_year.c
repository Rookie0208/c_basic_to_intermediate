#include<stdio.h>

int main(){
 int year;
 printf("Enter the year\n");
 scanf("%d",&year);
//  printf("%d",len);
 if(year>9999||year<1000){
    printf("please enter correct input\n");
 }
 else{
    if(year%400==0){
        printf("%d is a leap year\n",year);
    }

    else if(year%100==0){
        printf("%d is a not leap year\n",year);

    }

    else if(year%4==0){
        printf("%d is a leap year\n",year);

    }

    else
     printf("%d is a not a leap year\n",year);












 }
 printf("program EXIT(1)");



}