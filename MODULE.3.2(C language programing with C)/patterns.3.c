// patterns:3//
#include<stdio.h>
main(){	
	int n,m,i,j,k;
	printf("Enter the value : ");
	scanf("%d",&n);
	m=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m-1;j++){
			printf(" ");
			}
			for(k=1;k<=2*i-1;k++)
			{
				printf("*");
			}
			m--;
			printf("\n");
		}
	}
