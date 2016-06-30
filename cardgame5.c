#include<stdio.h>
int main()
{
  int num,squ,temp,i,n=0,d=10,left,right;
  printf("Enter the card number picked up by Patrick:\n");
  scanf("%d",&num);
  squ=num*num;
  temp=num;
  while(temp!=0)
  {
    temp=temp/10;
    n++;
  }
  for(i=1;i<n;i++)
  {
    d=d*10;
  }
  right=squ%d;
  left=squ/d;
  if(left+right==num)
  {
    printf("%d is a Kaprekar Number",num);
  }
  else
  {
    printf("%d is not a Kaprekar Number",num);
  }
  return 0;
}
