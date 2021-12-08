//program to check whether a number is positive,negative or zero//
#include<stdio.h>
main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("The number is positive");
	}
  	if(a<0)
  	{
  	    printf("The number is negative");	
    }
    if(a==0)
    {
    	printf("The number is zero");
	}
}
