// How many odd numbers//
#include<stdio.h>
main(){
	int i,n;
	printf("print odd numbers till: ");
	scanf("%d",&n);
	printf("all odd numbers from 1 to %d are:\n",n);
	for(i=1;i<=n;i+=2){
	
			printf("%d\n",i);
		
	}
}
