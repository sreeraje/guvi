#include<stdio.h>
#include<math.h>
int main()
{
  int m,n,days=0;
  scanf("%d%d",&m,&n);
if(m==0||n==0)
{
 printf("%d",days);
}
  else
  {
   days=1+(m/2)+(n/2);
    printf("%d",days);
  }
  
  return 0;
}
