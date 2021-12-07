#include<stdio.h>
main()
{
	int a;
	printf("enter the number of days:");
	scanf("%d",&a);
	if(a<=365)
	{
		printf("it is not a leap year");
	}
	else
	{
	   printf("it is a loop year");
	}
}
