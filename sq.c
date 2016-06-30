#include<stdio.h>
int main()
{
  int x,y,side;
  scanf("%d %d %d",&x,&y,&side);
  printf("%d,%d\n",(x+(side/2)),(y+(side/2)));
  printf("%d,%d\n",(x+(side/2)),(y-(side/2)));
  printf("%d,%d\n",(x-(side/2)),(y-(side/2)));
  printf("%d,%d\n",(x-(side/2)),(y+(side/2)));
  return 0;
}
