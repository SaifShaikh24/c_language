// Alphabet Pattern
/*
A 	A 	A 	A 	
B 	B 	B 	B 	
C 	C 	C 	C 	
D 	D 	D 	D 	
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=65;i<69;i++)
    {
        for(j=65;j<69;j++)
        {
            printf("%c \t",i);
        }

        printf("\n");
    }
    return 0;
}
