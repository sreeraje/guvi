#include<stdio.h>
int main()
{
  int n,l,m,o,p;
  scanf("%d",&n);
  if(n>=100&&n<=999)
  {
    l=n/100;
    m=n%10;
    o=n/10;
    p=o%10;
  if((l>p)&&(p>=m))
  {
    printf("yes");
  }
     else if((l<=p)&&(p<=m))
    {
      printf("yes");
  }
    else
    {
      printf("no");
      }
  }
    else
    {
         printf("no");
    }
     return 0;
  }
