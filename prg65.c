//Pattern
/*
  ***
  ***
  ***
  ***
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)//row
    {
        for(j=1;j<=3;j++)//Column
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}