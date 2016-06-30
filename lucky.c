#include<stdio.h>
int main()
{
  int e,f,g,h,i;
  scanf("%d",&e);
  scanf("%d",&f);
  g=f%10;
  i=e%10;
  h=e*e;
  if((i==g)||(i==h))
  {
    printf("yes");
  }
 /* else if(i==h)
  {
    printf("yes");
  }*/
  else if(e>=31)
  {
    printf("no");
  }
  else
  {
    printf("no");
  }
  return 0;
}
