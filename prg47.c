//Print -n to n
#include<stdio.h>
int main()
    {
        int n,i;
        printf("enter the n:");
        scanf("%d",&n);
        for(i=-n;i<=n;i++)
        {
            printf("\n %d",i);
        }
        return 0;
    }