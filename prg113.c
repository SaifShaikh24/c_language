/*while   
55555
44444
33333
22222
11111
*/
#include<stdio.h>
int main()
{
    int i,j;
    i=5;
    while(i>=1)
    {
        j=5;
        while(j>=1)
        {
            printf("%d",i);
            j--;

        }
        i--;
        printf("\n");

    }
    return 0;
}