//Print Series 2.4.8.... using do_while
#include<stdio.h>
int main()
{
    int i;
    i=1;
    do
    {
        printf("%d \t",i*=2);
    }
    while(i<=10);
    return 0;
}