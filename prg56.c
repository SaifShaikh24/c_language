//Print table from the number
#include<stdio.h>
int main()
{
    int i,n;
    printf(" enter number :");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf(" %d * %d = %d",n,i,n*i);
        printf("\n");
    }
    return 0;
}