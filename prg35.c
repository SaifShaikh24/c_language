//Programme 35
//Calculation of hra and da

#include<stdio.h>
int main()
{
	float salary,hra,da,total;
	printf("Enter Salary");
	scanf("%d",&salary);
	if(salary<=0 && salary<=5000)
	{
		hra=(salary*8)/100;
		da=(salary*20)/100;	
		printf("hra is=%f",hra);
		printf("da is=%f",da);
	}	
	else if(salary<5000 && salary<=10000)
	{
		hra=(salary*12)/100;
		da=(salary*30)/100;	
		printf("hra is=%f",hra);
		printf("da is=%f",da);
	}
	else if(salary<10000 && salary<=15000)
	{
		hra=(salary*15)/100;
		da=(salary*40)/100;	
		printf("hra is=%f",hra);
		printf("da is=%f",da);
	}	
	else
	{
		hra=(salary*20)/100;
		da=(salary*50)/100;
		printf("hra is=%f",hra);
		printf("da is=%f",da);
	}
	return 0;
}