#include<stdio.h>
int main()
{
  int x1,x2,x3,y1,y2,y3;
  float x4,y4;
  printf("X1\n");
  scanf("%d",&x1);
  printf("Y1\n");
  scanf("%d",&y1);
  printf("X2\n");
  scanf("%d",&x2);
  printf("Y2\n");
  scanf("%d",&y2);
  printf("X3\n");
  scanf("%d",&x3);
  printf("Y3\n");
  scanf("%d",&y3);
  x4=(x1+x2+x3)/3.0;
  y4=(y1+y2+y3)/3.0;
  printf("Dinesh's house is located at (%0.1f,%0.1f)",x4,y4);
    return 0;
}
