#include<stdio.h>
main()
{
	int a,b,c,max;
	printf("enter the a");
	scanf("%d",&a);
	printf("enter the b");
	scanf("%d",&b);
	printf("enter the c");
	scanf("%d",&c);
	if((a>b) && (a>c))
	
{
	max=a;
	
}
 else if ((b>a) && (b>c))
{
	max=b;
	
 } 
 else 
 {
 	max=c;
 }
	printf("\nmax of all three number = %d",max);
	
}

