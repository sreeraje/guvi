#include<stdio.h>
int main()
{
int x1,x2,y1,y2;
 float f,e;
printf("Enter x1\n");
  scanf("%d",&x1);
  printf("Enter y1\n");
  scanf("%d",&y1);
  printf("Enter x2\n");
  scanf("%d",&x2);
printf("Enter y2\n");
  scanf("%d",&y2);
e=(x1+x2)/2.0;
  f=(y1+y2)/2.0;
  printf("Resort is located at (%0.1f , %0.1f)" ,e,f);
  return 0;
}
