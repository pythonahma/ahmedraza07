// WAP to find reverse of string using recursion//
#include<stdio.h>
void reverseSentence();
int main(){
	printf("Enter the sentence:");
	reverseSentence();  
	return 0;
	
}
 void reverseSentence() {
 	char c;
 	scanf("%c",&c);
 	if( c != '\n'){
 		reverseSentence();
 		printf("%c",c);
 		return 0;
	 }
 }
