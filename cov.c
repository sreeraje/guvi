#include<stdio.h>
int main()
{
  int a,b,e;
  float c,g;
  printf("Enter the length of the bed\n");
  scanf("%d",&a);
   printf("Enter the width of the bed\n");
   scanf("%d",&b);
   printf("Enter the cost per sqm (in dollars)\n");
   scanf("%f",&c);
  e=a*b;
  g=e*c*100;
  printf("The quantity of cover needed is %dsqm\n",e);
  printf("The cost of the cover in cents is %0.2f",g);
  return 0;
}
