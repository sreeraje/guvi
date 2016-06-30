#include<stdio.h>
int main()
{
  int a,b;
  float c,e;
  printf("Enter cents :\n");
  scanf("%d",&a);
  printf("Enter taxi fare (in Dollars) :\n");
   scanf("%d",&b);
   c=a-b*100;
  e=c/100;
    printf("Balance : $%0.2f",e);
    return 0;
         }
