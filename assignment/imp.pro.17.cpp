#include<stdio.h>
main()
{
	float hindi,english,maths,gk,bst;
	float percentage, total;
	printf("enter the hindi marks");
	scanf("%f",&hindi);
    printf("enter the english marks");
	scanf("%f",&english);
		printf("enter the maths marks");
	scanf("%f",&maths);
		printf("enter the gk marks");
	scanf("%f",&gk);
		printf("enter the bst marks");
	scanf("%f",&bst);
	total=hindi+maths+english+gk+bst;
	percentage=total/5;
	if(percentage>=70)
	{
		printf("distinction");
	} 
	else if(percentage>=60)
	{
		printf("first class");
		
	}
	else if(percentage>=50)
	{
		printf("second class");
		
	}
	else if(percentage>=40)
	{
		printf("pass class");
		
	}
	else
	{
		printf("fail");
	}
	printf("\ntotal marks \t%.2f/500.00",total);
	printf("\npercentage \t%.2f%%",percentage);	
}
