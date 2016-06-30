#include<stdio.h>
int main()
{
  int p=0,n=0;
  printf("Enter the cards picked up by Patrick:\n");
  for(;n!=-999;)
  {
    p=p+n;
    scanf("%d",&n);
  }
  printf("The credit points is %d",p);
  return 0;
}
