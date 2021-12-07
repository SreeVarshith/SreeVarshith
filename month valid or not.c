#include<stdio.h>
main()
{
   int a;
   printf("enter the month:");
   scanf("%d",&a);
   if(a==1||a==2||a==3||a==4||a==5||a==6||a==7||a==8||a==9||a==10||a==11||a==12)
   {
   	printf("the month is valid");
    }
    else
	{
	printf("the month is invalid");
	}
    
}
