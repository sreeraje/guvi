#include<stdio.h>
int main()
{
  int a,t,dc=0,r;
  printf("Enter the chair number of Patrick:\n");
  scanf("%d",&a);
t=a;
  while(t>0)
  {
    dc++;
    t=t/10;
  }
  if(dc!=3)
  {
    printf("Patrick lost the gift");
  }
  else
  {
    r=a/10;
    r=r%10;
    
    if(r%3==0)
    {
      printf("Patrick won the gift");
    }
    else
    {
      printf("Patrick lost the gift");
    }
  
  }
  
  return 0;
  }
