#include<stdio.h>
main()
{
	int num, i,sum=1;
	printf("enter the number ");
	scanf("%d",&num);
	 for(i=1;i<=num;i++)
	 {
	 	printf("\n%d",i);
		sum=sum*i;
	 }
	 printf("\nsum=%d",sum);
	 
}


