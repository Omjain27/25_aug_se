#include<stdio.h>
struct person
{
	int accno;
	int atmpin;
	char bank[20];
	float accbalance;
	
};
main()
{
	struct person p;
	scanf("%d %d %s %f",&p.accno,&p.atmpin,&p.bank,&p.accbalance);
	printf("accno=%d\n atmpin=%d\n bank=%s\n acc balance=%f",p.accno,p.atmpin,p.bank,p.accbalance);
	
}
