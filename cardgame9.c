#include<stdio.h>
int main()
{
  int a,i=1,s=0;
  printf("Enter the card picked up by Johnny:\n");
  scanf("%d",&a);
  while(i<a)
  {
  if (a%i==0)
    s=s+i;
    i=i+1;
  }
  if (s==a)
  {
     printf("Johnny will win the Card Game \n");
    }
    else
    {
      printf("Johnny will not win the Card Game\n");
    }
  return 0;
  }
