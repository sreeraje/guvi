#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  if(a>b)
  {
    printf("%d is the maximum number\n",a);
  }
  else if(b>c)
  {
    printf("%d is the maximum number\n",b);
  }
  else if(c>a)
  {
    printf("%d is the maximum number\n",c);
  }
  return 0;
}
