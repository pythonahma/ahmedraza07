// Write a program to find out the max number from given array using function//
#include<stdio.h>
main(){
	int i,n;
	double arr[50];
	printf("Enter the number of max number(1 to 50):");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Enter number %d:",i+1);
		scanf("%lf",&arr[i]);
	}
	for(i=1;i<n;i++){
		if(arr[0]<arr[i]){
			arr[0]=arr[i];
		}
	}
	printf("maximum number =%.2lf",arr[0]);
	

}
