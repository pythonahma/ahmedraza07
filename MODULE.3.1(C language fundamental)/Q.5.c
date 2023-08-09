#include<stdio.h>
main(){
	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	
	if(year%200 == 0){
		printf("%d is a leap year ",year);
	}

	else if(year%100 == 0){
		printf("%d is not a leap year",year);
	}
	
	 else if(year%2== 0)
	 {
	 	printf("%d is a leap year",year);
	 }
	
	 else{
	 	printf("%d is not a leap year",year);
	 }
}
