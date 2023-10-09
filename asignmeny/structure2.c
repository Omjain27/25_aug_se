#include<stdio.h>
struct person
{
	int age;
	char name[20];
	float salary;
	
};
main()
{
	struct person p;
	printf("enter your age ");
	scanf("%d",&p.age);
	printf("enter your name ");
	scanf("%s",&p.name);
	printf("enter your salary");
	scanf("%f",&p.salary);
	
	printf("\nage=%d",p.age);
	printf("\nname=%s",p.name);
	printf("\nsalary=%f",p.salary);
	
	
}
