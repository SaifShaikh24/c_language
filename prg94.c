//Print Even numbers using do while 
#include<stdio.h>
int main()
{
    int i;
    i=0;
    do
    {
        printf("%d\t",i+=2);
    }
    while(i<=50);
    return 0;
}