#include<stdio.h>
main()
{
	int sidea,sideb,sidec;
	printf("enter the sides");
	scanf("%d%d%d",&sidea,&sideb,&sidec);
	if (sidea==sideb&&sideb==sidec)
	{
		printf("it is a equilateral triangle");
		
	}
	else if (sidea==sideb||sideb==sidec||sidec==sidea)
	{
		printf("it is a isosceles triangle");
		
	}
	else
	{
		printf("it is a scalene triangle");
	}
	
}
