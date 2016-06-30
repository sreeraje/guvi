#include<stdio.h>
int main()
{
  int j,k,l,m;
  j=0;
  scanf("%d",&k);
  m=k;
  while(k!=0)
  {
    l=k%10;
    j=(j*10)+l;
    k=k/10;
  }
  if(m==j)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
   if(k>=10&&k<=99)
  {
    printf("no");
  }
  return 0;
}
