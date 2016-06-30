#include<stdio.h>
int main()
{
  int a,b,s=0,i;
  printf("Enter the card picked up by Patrick:\n");
  scanf("%d",&a);
  for(i=a;i>0;)
  {
    b=a%10;
    a=a/10;
    s=s+b;
    i=a;
  }
  printf("The credit points is %d",s);
  return 0;
}
