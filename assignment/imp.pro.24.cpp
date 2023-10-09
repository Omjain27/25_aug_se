#include<stdio.h>
main()
{
	int i,num;
	int ft=0,st=1;
	printf("enter the number ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		int tt = ft + st ;
		printf("\n%d",ft);
		ft = st;
		st = tt;
		tt++; 
		
	}
	
}
