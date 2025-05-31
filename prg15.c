//Programme 15
//Result

#include<stdio.h>
int main()
{
	int m,p,c,t,pe;
	printf("Enter Maths marks");
	scanf("%d",&m);
	printf("\nEnter Physics marks");
	scanf("%d",&p);
	printf("\nEnter Chemistry marks");
	scanf("%d",&c);
	
	printf("\n Maths marks is=%d",m);	
	printf("\n Physics marks is=%d",p);
	printf("\n Chemistry marks is=%d",c);
		
	t=m+p+c;
	printf("\nTotal marks =%d",t);
	pe=t*100/300;
	printf("\n Percentage=%d",pe);
	return 0;
}