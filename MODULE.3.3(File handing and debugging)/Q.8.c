// WAP to reverse a string and check that the string is palindrome or not//
#include<stdio.h>
#include<string.h>
main(){
	char str[100],tmp,rev[100];
	int start,end;
	
	printf("Enter string:");
	scanf("%s",&str);
	
	strcpy(rev,str);
	
  start=0;
  end = strlen(str)-1;
  while(start<end){
  	tmp=str[start];
  	str[start]=str[end];
  	str[end]=tmp;
  	start++;
  	end--;
  	
  }
  printf("reverse string :%s\n",str);
  
  if(strcmp(rev,str)==0)
  printf("%s is palindrome!\n",str);
  else
  printf("%s is not palidrome!\n",str );
  
}


