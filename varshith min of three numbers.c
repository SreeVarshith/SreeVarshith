#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b && b<c)
	{
		printf("%d is minimum number",a);
	}
	else if(b<c)
	{
		printf("%d is minimum number",b);
	}
	else
	{
		printf("%d is minimum number",c);
	}	
}
