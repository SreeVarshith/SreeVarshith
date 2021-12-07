//program to check whether a number is divisible by 5 and 11//
#include<stdio.h>
main()
{
	int a;
	printf("enter the value of a:");
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
	{
	   printf("it is divisible");
    }
    else
    {
    	printf("it is not divisible");
	}
}
