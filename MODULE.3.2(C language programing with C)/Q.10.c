//write a program make a summation of given number//
#include<stdio.h>
main(){
	int n,sum=0,m;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n>0){
		m=n%10;
		sum=sum+m;
		n=n/10;
	}
	printf("sum is =%d",sum);
}
