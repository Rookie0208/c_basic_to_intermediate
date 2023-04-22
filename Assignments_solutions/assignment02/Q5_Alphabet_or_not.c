#include<stdio.h>

int main(){
    char a;
    printf("Enter a character\n");
    scanf("%c",&a);
    printf("%d\n",a);
    if(a>64&&a<101){
        printf("it is an alphabet\n");
    }
    else if(a>96&&a<133){
    printf("it is an alphabet\n");
    }
    else{
        printf("It is not an alphabet");
    }

}