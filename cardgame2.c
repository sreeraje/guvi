#include<stdio.h>
int main()
{
  int n,i,a;
  printf("Enter the card number typed by Johnny:\n");
  scanf("%d",&a);
  n=a;
  for(i=0;n>0;n/=10)
    {
    i=i*10;
    i=i+(n%10);
  }
  printf("The reverse order of %d is %d. ", a, i);
  return 0;
}
