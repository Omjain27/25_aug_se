#include<stdio.h>
main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(num%5==0)
	{
		printf("this number is devisable by 5");
		
	}
	else if (num%11==0)
	{
		printf("this number id devisable by 11");
		
	}
	else 
	{
		printf("this number is not devisable by both numbers");
		
	}
}
