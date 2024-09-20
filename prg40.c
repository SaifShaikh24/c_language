//Small and Capital Character
#include<stdio.h>
int main()
{
 char ch;
 printf("enter the character ");
 scanf(" %c", &ch);

if(ch>=65 && ch<=90)
  {
  printf(" \n Character is Capital %c",ch+32);
  }
else
  {
  printf("\n Character is Small %c",ch-32);
  }
  return 0;
}