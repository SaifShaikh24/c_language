// Odd Number Pattern
/*
1 	1 	1 	1 	1 	
3 	3 	3 	3 	3 	
5 	5 	5 	5 	5 	
7 	7 	7 	7 	7 	
9 	9 	9 	9 	9 	
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i+=2)
    {
        for(j=1;j<=9;j+=2)
        {
            printf("%d \t",i);
        }

        printf("\n");
    }
    return 0;
}