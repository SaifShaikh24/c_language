//Print 1+2+......+10=55 with do_while
#include<stdio.h>
int main()
{
    int i,sum=0;
    i=1;
    do
    {
     sum=sum+i;
     i++;
    }
    while(i<=10);
    printf("%d",sum);

    return 0;
}