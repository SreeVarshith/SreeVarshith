//C-PROGRAM TO CALCULATE PROFIT OR LOSS FOR GIVEN COST PRICE AND SELLING PRICE//
#include<stdio.h>
main()
{
	int cp,sp;
	printf("enter the cost price:");
	scanf("%d",&cp);
	printf("enter the selling price");
	scanf("%d",&sp);
	if(sp>cp)
	{
		printf("it is profit");
	 }
	 else
	 {
	 	printf("it is loss");
	 }
}
