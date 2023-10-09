#include<stdio.h>
main()
{
	int num,i;
	printf("enter the number");
	scanf("%d",&num);
	for(i=2;i<=num;i=i+2)
	{
		printf("\n%d",i);
	}
}
