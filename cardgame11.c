#include<stdio.h>
int main()
{
  int a,b,c,i=0,j=0;
  printf("Enter the card number picked by Patrick:\n");
  scanf("%d",&a);
  printf("Enter the card number picked by Johnny:\n");
  scanf("%d",&b);
  if((a>=0) && (b>=0))
  {
    while(a>0)
    {
      i=i*10;
      i=i+(a%10);
      a=a/10;
    }
    while(b>0)
    {
      j=j*10;j=j+(b%10);
      b=b/10;
    }
    c=i+j;
    printf("Sum is %d",c);
  }
  else if (a<0 && b<0)
  {
    i=-(a);
    j=-(b);
    c=i+j;
    printf("Sum is %d",c);
  }
   else if(a<0)
  {
    while(a<0)
    {
      j=j+(b%10);
      b=b/10;
    }
    c=j-a;
    printf("Sum is %d",c);
  }
  else
  {
    while(a>0)
    {
      i=i*10;
      i=i+(a%10);
      a=a/10;
    }
    c=i-b;
    printf("Sum is %d",c);
  }
  return 0;
}
