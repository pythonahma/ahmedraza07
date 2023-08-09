// WAP to find factorial using recursion//
#include<stdio.h>
long int multiplyNumbers(int n);
int main(){
	int n;
	printf("Enter a positive number:");
	scanf("%d",&n);
	printf("factorial of %d = %ld",n,multiplyNumbers(n));
	return 0;
}
long int multiplyNumbers(int n){
	if(n>=1)
	return n*multiplyNumbers(n-1);
	else
	return 1;
}
