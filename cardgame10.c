#include<stdio.h>
int main()
{
  int a=1,b=0,c=1,i=1,n;
  printf("Enter the card number picked up by Patrick:\n");
  scanf("%d",&n);
  printf("Patrick must pick and arrange cards in below order\n");
  while(i<=n)
  {
    c=a+b;
        printf("%d ",c);
    a=b;
    b=c;
    i=i+1;
  }
  return 0;
}
