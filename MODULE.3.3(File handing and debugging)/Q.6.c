// WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array//
#include<stdio.h>
main(){
	int i,j,rows,col,a[10][10],b[10][10];
	int addition[10][10],subtraction[10][10],multiplication[10][10];
	
	printf("\n Enter the number:\n");
	scanf("%d %d",&i,&j);
	
	printf("\n enter the first array ele\n:");
	for(rows=0;rows<i;rows++){
		for(col=0;col<j;col++){
			scanf("%d",&a[rows][col]);
		}
	}
	printf("\n enter the second array ele\n");
	for(rows=0;rows<i;rows++){
		for(col=0;col<j;col++){
			scanf("%d",&b[rows][col]);
		}	
	}
	for(rows=0;rows<i;rows++){
		for(col=0;col<j;col++){
			addition[rows][col]=a[rows][col]+b[rows][col];
			subtraction[rows][col]=a[rows][col]-b[rows][col];
			multiplication[rows][col]=a[rows][col]*b[rows][col];
		}
	}
	printf("\n add\tsub\tmulti");
	for(rows=0;rows<i;rows++){
		for(col=0;col<j;col++){
			printf("\n%d\t",addition[rows][col]);
			printf("%d\t",subtraction[rows][col]);
			printf("%d\t",multiplication[rows][col]);
		}		
	}
}

