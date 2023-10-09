#include<stdio.h>
main()

{
	int a[5];
	int temp;
	int i,j;
	for (i=0;i<6;i++)

	{
		printf("enter a element");
		scanf("%d",&a[i]);
		
	}
	printf("before sorting");
	for (i=0;i<6;i++)
	{
		printf("%d",a[i]);
		
	}
	for (i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
			printf("\nafter sorting");
			for(i=0;i<6;i++)
			{
				printf("%d",a[i]);
			}
	}

