#include<stdio.h>
void checkEven(int);
int main()
{
  int p;
  scanf("%d",&p);
  checkEven(p);
  return 0;
}
void checkEven(int p)
{
  if(p>=100&&p<=999)
  {
    if(p%2==0)
    {
      printf("yes");
    }
    else
    {
      printf("no");
    }
  }
  else if(p>=10&&p<=99)
  {
    printf("no");
  }
  else if(p>999)
  {
    printf("no");
  }
  else
  {
    printf("no");
  }
  }
