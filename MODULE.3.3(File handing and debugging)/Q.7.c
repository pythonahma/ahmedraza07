// WAP Find out length of string without using inbuilt function//
#include<stdio.h>
main(){
	char string[50];
	int i,length=0;
	printf("Enter the string:\n");
	gets(string);
	for(i=0;string[i]!='\0';i++){
		length++;
	}
	printf("the length of a string is the number of character \n");
	printf("The length of %s=%d\n",string,length);
	
}
