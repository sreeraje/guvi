#include<stdio.h>
int main()
{
  int num,a,b=1,c=0;
  printf("Enter the number\n");
  scanf("%d",&num);
  while(num>0)
  {
    a=num%10;
    if(a>(9-a))
    {
   a=9-a;
    }
    c=c+(a*b);
    b=b*10;
    num=num/10;
  }
    printf("The minimum possible positive number is %d",c);
  return 0;
}
