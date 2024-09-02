//Programme 12
//User Input

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value of a");
	scanf("%d",&a);
	printf("Enter value of b");
	scanf("%d",&b);
	
	printf("\n Value of a %d",a);
	printf("\n Value of b %d",b);

	printf("\n Value of a: %d \t b:%d",a,b);
	printf("\n sizeof int %d",sizeof(int));
	
	printf("\n Address: a %u \t b:%u",&a,&b);
		
	printf("\n Enter value of a and b",a,b);	
	scanf("%d %d",&a,&b);
	
	printf("\n Value a: %d \t b: %d",a,b);
	printf("\n address a:%u \t b: %u",&a,&b);
	return 0;
}