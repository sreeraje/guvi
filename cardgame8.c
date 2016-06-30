#include<stdio.h>
int main()
{
  int a=0,c,i;
  printf("Enter the cards picked up by Patrick:\n");
  scanf("%d",&c);
  while(c!=999)
  {
    i=2;
    while(i<c)
    {
      if(c%i==0)
        break;
      i++;
    }
    if(i==c)
    {
      a=a+i;
    }
    scanf("%d",&c);
  }
  printf("The credit points is %d",a);
  return 0;
}
