#include<stdio.h>
int main()
{
  int p;
  printf("Enter the height of the shot\n");
  scanf("%d",&p);
  if(p<=50)
  {
    printf(":-(Aim High");
  }
  else if(p>=90)
  {
    printf(":-(Aim Low");
  }
  else
  {
    printf("Hurray !!!");
  }
  return 0;
}
