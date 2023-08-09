// patterns:4//
#include<stdio.h>
main(){
	int i,j,k;
	printf("Enter the number :");
	scanf("%d",&k);
	for(i=1;i<k;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i= k -1;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
}
