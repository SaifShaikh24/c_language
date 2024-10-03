//Print 10 to 1 with do_while
#include<stdio.h>
int main()
{
    int i;
    i=10;
    do
    {
        printf("%d",i--);
    }
    while(i>=1);
    return 0;
}