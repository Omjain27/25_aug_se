#include<stdio.h>
main()
{
	int num, i,total=0;
	printf("enter the number ");
	scanf("%d",&num);
	 for(i=1;i<=num;i++)
	 {
	 	printf("\n%d",i);
		total=total+i;
	 }
	 printf("\ntotal=%d",total);
	 
}
