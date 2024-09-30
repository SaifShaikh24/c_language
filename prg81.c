//Pattern 
// A
// AB
// ABC
// ABCD
// ABCDE
// ABCDEF
// ABCDEFG
// ABCDEFGH
// ABCDEFGHI
// ABCDEFGHIJ
// ABCDEFGHIJK

#include<stdio.h>
int main()
{
    int i,j;
    for(i=65;i<=75;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}