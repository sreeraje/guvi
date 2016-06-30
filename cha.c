#include<stdio.h>
int main()
{
  int a,b,c,e,g,h;
  printf("Enter the x-coordinate of the left bottom vertex\n");
  scanf("%d",&a);
  printf("Enter the y-coordinate of the left bottom vertex\n");
  scanf("%d",&b);
  printf("Enter the length of a side\n");
  scanf("%d",&c);
  e=c/2;
 g=e+a;
  h=e+b;
  printf("The centre of the room is at (%d,%d)\n",g,h);
 return 0;
}
