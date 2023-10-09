#include<stdio.h>
main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(num>0)
	{
		printf("it is positive number");
	}
	else if (num<0)
	{
		printf("it is negative number");
	}
	else 
	{
		printf("number if zero");
	}
}
