#include<stdio.h>
main()
{
	int i,num;
	printf("enter the number ");
	scanf("%d",&num);
	for(i=num;i>=1;i--)
	{
		printf("\n%d",num);
		num--;
	}
	
}
