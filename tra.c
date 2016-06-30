#include<stdio.h>
int main()
{
  char a[50],b[50],c[50];
  printf("Enter Details :\n");
  printf("Enter Flight Name :\n");
  scanf("%s",a);
  printf("Enter Starting Location :\n");
  scanf("%s",b);
  printf("Enter Ending Location :\n");
  scanf("%s",c);
  printf("Travel Details :\n");
  printf("The flight %s starts from %s and reaches %s.",a,b,c);
  return 0;
}
