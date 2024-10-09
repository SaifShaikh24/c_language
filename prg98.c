//Print n to 1 using while
#include<stdio.h>
int main()
{
    int i,n;
    printf(" entre the n :");
    scanf("%d", &n);
    i=n;
    while(i>=1)
    {
        printf("%d",i--);
    }
    return 0;
}