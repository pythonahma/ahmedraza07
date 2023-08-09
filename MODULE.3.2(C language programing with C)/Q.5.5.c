// sum of even numbers//
#include<stdio.h>
main()
{
  int i, number, Sum = 0;
 
  printf("\n Please Enter the Maximum Limit Value : ");
  scanf("%d", &number);
  
  printf("\n Even Numbers between 0 and %d are : ", number);
  for(i = 1; i <= number; i++)
  {
    if ( i%2 == 0 ) 
    {
  	printf("%d  ", i);
        Sum = Sum + i;
    }
  }
  printf("\n The Sum of All Even Numbers upto %d  = %d", number, Sum);
}
