//wap convert days into years//
#include<stdio.h>
main(){
	int days,years,weeks;
	printf("Enter days:");
	scanf("%d",&days);
	years=(days/365);
	weeks=(days%365)/7;
	days=(days%365)%7;
	printf("years: %d\n",years);
	printf("weeks: %d\n",weeks);
	printf("days:%d\n",days);
}

