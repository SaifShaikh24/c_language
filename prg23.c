
//number is divisible by 5 or not

#include<stdio.h>

int main()
{

	int a;


	printf("enter a");
	scanf("%d",&a);

	if(a%5==0)
	{
		printf("a(%d) is divisible by 5",a);
	}
	else
	{
		printf("a(%d) is not divisible by 5",a);
	}
	return 0;
}