//WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo)//
#include<stdio.h>
main(){
	int n1,n2,addition,subtraction,multiply,modulo;
	float divide;
	printf("Enter your value :");
	scanf("%d",&n1);
	printf("Enter your value :");
	scanf("%d",&n2);
	addition=n1+n2;
	subtraction=n1-n2;
	multiply=n1*n2;
	divide=n1/(float)n2;
	modulo=n1%n2;
	printf("Addition = %d\n",addition);
    printf("Subtraction = %d\n",subtraction);	
    printf("multiplication=%d\n",multiply);
    printf("division=%.2f\n",divide);
     printf("Reminder=%d",modulo);
     return 0;
}
