//print 1,2,4...=30
#include<stdio.h>
int main()
{
    int i,total=0;
    for(i=0;i<=10;i+=2)
    {
        total=total+i;
    }
    printf("total= %d",total);
    return 0;
}