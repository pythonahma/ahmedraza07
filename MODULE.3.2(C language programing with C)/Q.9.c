//write a program to find out the max from given number//
#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter the number a,b and c:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c)
		printf("%d is the largest number.",a);
	if(b>=a && b>=c)
		printf("%d is the largest number.",b);
	if(c>=a && c>=b)
		printf("%d is the largest number.",c);	

	
}

