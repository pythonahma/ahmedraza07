#include<stdio.h>
main(){
	int a,b,addition,subtraction,multiply,modulo;
	float divide;
	printf("Enter your value :");
	scanf("%d",&a);
	printf("Enter your value :");
	scanf("%d",&b);
	addition=a+b;
	subtraction=a-b;
	multiply=a*b;
	divide=a/(float)b;
	modulo=a%b;
	printf("Addition = %d\n",addition);
    printf("Subtraction = %d\n",subtraction);	
    printf("multiplication=%d\n",multiply);
    printf("division=%.2f\n",divide);
     printf("Reminder=%d",modulo);
     return 0;
}
