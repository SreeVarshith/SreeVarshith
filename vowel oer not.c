#include<stdio.h>
main()
{
	char c;
	printf("enter the alphabet:");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		printf("the alphabet you entered is a vowel");
	}
	else
	{
		printf("the alphabet you entered is a consonent");
	}
}
