#include<stdio.h>
main(){
	int p,r,t,int_amount;
	printf("this is Rate of interest & time to find simple interest: \n ");
	scanf("%d%d%d",&p,&r,&t);
	int_amount=(p*r*t)/100;
	printf("simple interest = %d",int_amount);
}
