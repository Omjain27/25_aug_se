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
	scanf("%d %s %f",&p.age,&p.name,&p.salary);
	printf("age=%d\n name=%s\n salary=%f",p.age,p.name,p.salary);
}
