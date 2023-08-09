//patterns:5//
#include<stdio.h>
main(){
	int i,j,k=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d",k++);
		}
		printf("\n");
	}
}
