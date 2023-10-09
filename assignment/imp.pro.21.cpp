#include<stdio.h>
main()
{
	float sp,cp,loss,profit;   //sp=selling price , cp=cost price
 	printf("enter the sp");
	scanf("%f",&sp);
	printf("enter the cp");
	scanf("%f",&cp);
	if (sp>cp)
	{
		profit=sp-cp;
		printf("profit = %.2f",profit);
	}	
	else if(cp>sp)
	{
	loss=cp-sp;
	
	printf("loss=%.2f",loss);
}
	else
	{
		printf("there are no profit and loss");
		}	
	
}
