#include<stdio.h>
int main()
{
  int p1,p2,p3,p4,p;
  scanf("%d",&p1);
  scanf("%d",&p2);
  scanf("%d",&p3);
  scanf("%d",&p4);
  scanf("%d",&p);
if(p<p1)
{
  printf("B1");
}
  else if(p<p1+p2)
  {
    printf("B2");
  }
  else if(p<p1+p2+p3)
  {
    printf("B3");
  }
  else if(p<p1+p2+p3+p4)
  {
    printf("B4");
  }
  else
 printf("EXT");
  return 0;
}
