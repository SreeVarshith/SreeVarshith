#include<stdio.h>
int main()
{
	int p,m,c,b,cs;
	float ps;
	printf("enter first subject marks:");
	scanf("%d",&p);
	printf("enter second subject marks:");
	scanf("%d",&m);
	printf("enter third subject marks:");
	scanf("%d",&c);
	printf("enter fourth subject marks:");
	scanf("%d",&b);
	printf("enter fifth subject marks:");
	scanf("%d",&cs);
	ps=(p+m+c+b+cs)/5;
	printf("percentage=%.2f\n",ps);
	if(ps>=90)
	{
		printf("grade A");
	}
	else if(ps>=80)
	{
		printf("grade B");
	}
	else if(ps>=70)
	{
		printf("grade C");
	}
	 else if(ps>=40)
	{
		printf("grade D");
	}
   if (ps<=40)
	{
		printf("grade E");
	}
}
