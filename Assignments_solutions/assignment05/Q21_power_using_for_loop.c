// Q21. Write a C program to find power of a number using for loop.
#include<stdio.h>

int solve(int a, int b) {
    int ans = 1;
    // for(int i = 1; i<=b; i++) {
    //     ans *= a;
    // }
    // return ans;
    while(b) {
		if(b&1) {
			ans = (ans * a);
		}
		a = a * a;
		b >>= 1;
	}
	return ans;
}
int main()
{
    int n,b;
    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Enter the no. of power : ");
    scanf("%d", &b);

   printf("%d ", solve(n, b));
}