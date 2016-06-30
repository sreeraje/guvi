#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the cost of travel by luxury bus\n");
  scanf("%d",&a);
  printf("Enter the cost of travel by share auto\n");
   scanf("%d",&b);
  if(a>b)
  {
    printf("Minimal cost travel is by auto");
  }
  else if(a<b)
  {
    printf("Minimal cost travel is by bus");
  }
  return 0;
}
