#include<stdio.h>
int main()
{
  int s,n,su=0,tc=0; 
  printf("Enter the target score:\n");
  scanf("%d",&s);
  printf("Enter the scores taken by Patrick in each turn:\n");
  for(;su<s;)
  {
  scanf("%d",&n);
    su=n+su;
    tc++;
  }
  printf("The number of turns is %d",tc);
  return 0;
}
