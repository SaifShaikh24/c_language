// print 1,4,9
#include<stdio.h>
int main()
{
    int i,n,total;
    printf("enter n:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
          total=i*i;
        printf("%d \n",total);

    }
    return 0;

}