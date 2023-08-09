//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)//
#include<stdio.h>
main(){
 int a,b;
 char choice;
 printf("Enter your number:\n")	;
 printf("a. Addition\nb. Substraction\nc.multiplication\nd.Division\n");
 scanf("%c",&choice);
 printf("Enter the number\n ");
 scanf("%d %d",&a,&b);
 switch(choice){
 	case 'a': printf("%d + %d = %d\n",a,b ,(a+b));
 	break;
 		case 'b': printf("%d - %d = %d\n",a,b ,(a-b));
 	break;
 		case 'c': printf("%d * %d = %d\n",a,b ,(a*b));
 	break;
 		case 'd': if(b != 0)
		  printf("%d / %d = %d\n",a,b ,(a/b));
 	else
 	printf("number can't be divided by 0\n");
 	break;
 	default:printf("you entered wrong choice\n");
 	break; 	
 }
}
