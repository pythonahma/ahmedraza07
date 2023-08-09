// How many even numbers//
#include<stdio.h>
main(){
	int i,n;
	printf("print even numbers : ");
	scanf("%d",&n);
	printf("all even numbers from 1 to %d are:\n",n);
	for(i=1;i<=n;i++){
	if(i%2 == 0){

			printf("%d\n",i);
			}
	}
}
