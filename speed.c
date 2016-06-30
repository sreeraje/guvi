#include<stdio.h>
int main()
{
  float a,b,c,e,g,h;
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);
  e=a/5280;
  g=b/3600;
  h=e/g;
  if(h>55)
  {
    printf("Speeding");
  }
  else
  {
    printf("Not Speeding");
  }
  return 0;
}
